// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDTRANSFORMATIONPERSONALIZEDLIMIT_H
#define FCFEEDTRANSFORMATIONPERSONALIZEDLIMIT_H

@class NSString;
@protocol FCFeedTransforming, FCFeedPersonalizing;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationPersonalizedLimit : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(id)transformationWithPersonalizer:(id)arg0 dateRange:(id)arg1 ;
+(id)transformationWithPersonalizer:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif