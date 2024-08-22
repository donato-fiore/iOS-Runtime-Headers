// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMETADATARANGE_H
#define MIROMETADATARANGE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MiroMetadataRange : NSObject

@property (retain, nonatomic) NSDictionary *analysisDict; // ivar: _analysisDict
@property (retain, nonatomic) NSArray *childRanges; // ivar: _childRanges
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) int durationInFrames; // ivar: _durationInFrames
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) NSUInteger rating; // ivar: _rating
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) int startTimeInFrames; // ivar: _startTimeInFrames
@property (nonatomic) NSUInteger type; // ivar: _type


+(CGFloat)miro_computeStaticScoreWithFlags:(NSUInteger)arg0 ;
+(id)descriptionForFlags:(NSUInteger)arg0 ;
+(id)descriptionForType:(NSUInteger)arg0 ;
+(id)mergeRanges:(id)arg0 withRanges:(id)arg1 ;
+(id)rangeWithRange:(id)arg0 ;
+(id)rangeWithType:(NSUInteger)arg0 ;
+(id)rangeWithVPMetadataRange:(id)arg0 ;
+(void)enumerateByAscendingTypes:(id)arg0 handler:(id)arg1 ;
+(void)miro_computeAndSetStaticScoreWithFlags:(NSUInteger)arg0 forRanges:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)_treeDescriptionWithDepthLevel:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(int)durationOfOverlapWithRange:(id)arg0 ;
-(int)durationOfOverlapWithStart:(int)arg0 duration:(int)arg1 ;


@end


#endif