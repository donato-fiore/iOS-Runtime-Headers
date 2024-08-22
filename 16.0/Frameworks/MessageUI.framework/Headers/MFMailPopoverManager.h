// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILPOPOVERMANAGER_H
#define MFMAILPOPOVERMANAGER_H

@class NSMutableArray, NSString;
@protocol UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate>

 {
    NSMutableArray *_passThroughProviders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)managerForWindow:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(void)enumerateManagersUsingBlock:(id)arg0 ;
-(id)_init;
-(id)allPassThroughViews;
-(id)init;
-(void)addPassthroughViewProvider:(id)arg0 ;
-(void)dealloc;
-(void)removePassthroughViewProvider:(id)arg0 ;


@end


#endif