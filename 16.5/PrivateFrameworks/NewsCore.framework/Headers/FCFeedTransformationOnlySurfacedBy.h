// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONONLYSURFACEDBY_H
#define FCFEEDTRANSFORMATIONONLYSURFACEDBY_H

@class NSString, NSDictionary, NSSet;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationOnlySurfacedBy : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID; // ivar: _feedContextByFeedID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *tagIDs; // ivar: _tagIDs


+(id)transformationWithTagIDs:(id)arg0 feedContextByFeedID:(id)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif