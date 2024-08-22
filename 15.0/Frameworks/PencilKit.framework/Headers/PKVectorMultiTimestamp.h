// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVECTORMULTITIMESTAMP_H
#define PKVECTORMULTITIMESTAMP_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKVectorMultiTimestamp : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *timestamps; // ivar: _timestamps


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)clockForUUID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(NSUInteger)compareTo:(id)arg0 ;
-(NSUInteger)hash;
-(id)clockElementForUUID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 andCapacity:(NSUInteger)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 andCapacity:(NSUInteger)arg1 ;
-(id)initWithTimestamps:(id)arg0 ;
-(id)serialize;
-(id)sortedUUIDs;
-(void)mergeWithTimestamp:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setClock:(NSUInteger)arg0 forUUID:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 atIndex:(NSUInteger)arg3 ;


@end


#endif