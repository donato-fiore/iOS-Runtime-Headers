// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMUTABLETRANSIENTOVERLAYDISMISSALREQUEST_H
#define SBMUTABLETRANSIENTOVERLAYDISMISSALREQUEST_H



#import "SBTransientOverlayDismissalRequest.h"

@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id *completionHandler;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif