// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef METADATARANGE_H
#define METADATARANGE_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MetadataRange : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (nonatomic) int duration; // ivar: _duration
@property (nonatomic) int startTime; // ivar: _startTime
@property (nonatomic) int type; // ivar: _type


+(id)descriptionForFacePositions:(int)arg0 ;
+(id)descriptionForShotType:(int)arg0 ;
+(id)objectFromPlist:(id)arg0 inProject:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 startTime:(int)arg1 duration:(int)arg2 attributes:(id)arg3 ;
-(id)plistRepresentation;


@end


#endif