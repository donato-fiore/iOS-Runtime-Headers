// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTIPSHELPER_SWIFT_H
#define PXTIPSHELPER_SWIFT_H


#import <Foundation/Foundation.h>


@interface PXTipsHelper_Swift : NSObject {
    ? popovers;
}




+(BOOL)hasInitializedTips;
+(id)curatedLibrarySwitchTipID;
+(id)shared;
+(void)setHasInitializedTips:(BOOL)arg0 ;
-(BOOL)isTipPresentable:(id)arg0 ;
-(id)init;
-(void)setTip:(id)arg0 dismissCompletion:(id)arg1 ;
-(void)setTip:(id)arg0 isPresentable:(BOOL)arg1 ;
-(void)setTipActionPerformed:(id)arg0 ;
-(void)setup;


@end


#endif