// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAGEVERIFICATION_H
#define VUIAGEVERIFICATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface VUIAgeVerification : NSObject

@property (nonatomic) BOOL isAgeVerificationEnabled; // ivar: _isAgeVerificationEnabled
@property (retain, nonatomic) NSNumber *minMovieRatingRequiringAgeVerification; // ivar: _minMovieRatingRequiringAgeVerification
@property (retain, nonatomic) NSNumber *minTvRatingRequiringAgeVerification; // ivar: _minTvRatingRequiringAgeVerification
@property (retain, nonatomic) id *notificationToken; // ivar: _notificationToken


+(id)sharedInstance;
-(void)configureAgeVerification:(id)arg0 ;
-(void)performAgeGateVerificationWithRatingValue:(id)arg0 ratingDomain:(id)arg1 completion:(id)arg2 ;


@end


#endif