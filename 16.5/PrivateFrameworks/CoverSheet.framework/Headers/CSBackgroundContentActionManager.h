// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBACKGROUNDCONTENTACTIONMANAGER_H
#define CSBACKGROUNDCONTENTACTIONMANAGER_H

@class NSMutableSet, NSString;
@protocol SBFActionHandling, SBFActionProviding, CSBackgroundContentActionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CSBackgroundContentActionManager : NSObject <SBFActionHandling>

 {
    id<SBFActionProviding> *_contentActionProvider;
}


@property (retain, nonatomic) NSMutableSet *activeActions; // ivar: _activeActions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSBackgroundContentActionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_addAction:(id)arg0 ;
-(BOOL)handleAction:(id)arg0 forProvider:(id)arg1 ;
-(BOOL)handlesActionWithClass:(Class)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)validActionWithIdentifierIfExists:(id)arg0 ;
-(void)_removeAction:(id)arg0 ;
-(void)setContentActionProvider:(id)arg0 ;


@end


#endif