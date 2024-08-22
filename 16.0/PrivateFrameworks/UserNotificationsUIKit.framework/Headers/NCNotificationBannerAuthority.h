// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONBANNERAUTHORITY_H
#define NCNOTIFICATIONBANNERAUTHORITY_H

@class NSString;
@protocol BNConsidering, BNConsideringDelegate;

#import <Foundation/Foundation.h>


@interface NCNotificationBannerAuthority : NSObject <BNConsidering>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNConsideringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requesterIdentifier;
-(NSInteger)shouldOverlapPresentable:(id)arg0 withPresentable:(id)arg1 ;
-(NSInteger)shouldPresentPresentable:(id)arg0 withPresentedPresentables:(id)arg1 responsiblePresentable:(*id)arg2 ;


@end


#endif