// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDTRANSFORMATIONLOWQUALITYCONTENTFILTER_H
#define FCFEEDTRANSFORMATIONLOWQUALITYCONTENTFILTER_H

@class NSString;
@protocol FCFeedTransforming, FCFeedPersonalizing;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationLowQualityContentFilter : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformationWithPersonalizer:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif