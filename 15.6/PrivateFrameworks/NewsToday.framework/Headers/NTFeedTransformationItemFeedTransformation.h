// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTFEEDTRANSFORMATIONITEMFEEDTRANSFORMATION_H
#define NTFEEDTRANSFORMATIONITEMFEEDTRANSFORMATION_H

@class NSString;
@protocol NTFeedTransforming, FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCFeedTransforming> *feedItemTransformation; // ivar: _feedItemTransformation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFeedItemTransformation:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif