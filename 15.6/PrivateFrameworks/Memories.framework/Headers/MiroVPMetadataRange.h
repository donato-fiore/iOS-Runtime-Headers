// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROVPMETADATARANGE_H
#define MIROVPMETADATARANGE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MiroVPMetadataRange : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *analysisDict; // ivar: _analysisDict
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) int durationInFrames; // ivar: _durationInFrames
@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) int startTimeInFrames; // ivar: _startTimeInFrames
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)descriptionForFlags:(NSUInteger)arg0 ;
+(id)descriptionForType:(NSUInteger)arg0 ;
+(id)mergeRanges:(id)arg0 withRanges:(id)arg1 ;
+(id)rangeWithType:(NSUInteger)arg0 flags:(NSUInteger)arg1 startTimeInFrames:(int)arg2 durationInFrames:(int)arg3 analysisDict:(id)arg4 ;
+(void)enumerateByAscendingTypes:(id)arg0 handler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif