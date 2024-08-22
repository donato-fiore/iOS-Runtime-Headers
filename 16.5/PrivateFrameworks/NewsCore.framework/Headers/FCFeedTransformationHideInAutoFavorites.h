// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONHIDEINAUTOFAVORITES_H
#define FCFEEDTRANSFORMATIONHIDEINAUTOFAVORITES_H

@class NSSet, NSString, NSDictionary;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming>



@property (copy, nonatomic) NSSet *autoFavoriteTagIDs; // ivar: _autoFavoriteTagIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID; // ivar: _feedContextByFeedID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformationWithFeedContextByFeedID:(id)arg0 autoFavoriteTagIDs:(id)arg1 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif