// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEMORYPRESENTATIONHINTS_H
#define PHMEMORYPRESENTATIONHINTS_H

@class NSString, NSDictionary;
@protocol PHCollectionPresentationHints;

#import <Foundation/Foundation.h>


@interface PHMemoryPresentationHints : NSObject <PHCollectionPresentationHints>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger forbiddenMoods; // ivar: _forbiddenMoods
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *musicGenreDistribution; // ivar: _musicGenreDistribution
@property (readonly, nonatomic) NSInteger qualityCategory; // ivar: _qualityCategory
@property (readonly, nonatomic) NSUInteger recommendedMoods; // ivar: _recommendedMoods
@property (readonly, nonatomic) NSUInteger socialRelationships; // ivar: _socialRelationships
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger tripType; // ivar: _tripType


+(NSInteger)tripTypeFromMemory:(id)arg0 ;
+(NSUInteger)socialRelationshipsFromMemory:(id)arg0 ;
-(id)initWithMemory:(id)arg0 ;


@end


#endif