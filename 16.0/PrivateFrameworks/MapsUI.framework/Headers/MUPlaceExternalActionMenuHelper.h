// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEEXTERNALACTIONMENUHELPER_H
#define MUPLACEEXTERNALACTIONMENUHELPER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol MUExternalActionHandling;

#import <Foundation/Foundation.h>

#import "MUTimeExpirableLRUCache.h"
#import "MUGroupedExternalActionController.h"

@interface MUPlaceExternalActionMenuHelper : NSObject {
    MUTimeExpirableLRUCache *_iconCache;
    NSMutableDictionary *_lockupImagesByIdentifiers;
    MUGroupedExternalActionController *_resolver;
    id<MUExternalActionHandling> *_actionHandler;
    NSArray *_partnerActionMenuElements;
}


@property (readonly, nonatomic) MUGroupedExternalActionController *actionController;
@property (readonly, nonatomic) NSString *actionName;
@property (nonatomic) BOOL isQuickAction; // ivar: _isQuickAction
@property (readonly, nonatomic) NSString *symbolName;


-(id)_buildMenuElementForViewModel:(id)arg0 presentationOptions:(id)arg1 isSingleProvider:(BOOL)arg2 ;
-(id)buildMenuElementsWithPresentationOptions:(id)arg0 ;
-(id)initWithExternalActionController:(id)arg0 iconCache:(id)arg1 ;
-(void)_downloadImageWithURL:(id)arg0 variant:(NSUInteger)arg1 uniqueIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif