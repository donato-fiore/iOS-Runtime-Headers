// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRVECTORTIMESTAMP_H
#define CRVECTORTIMESTAMP_H

@class NSMutableDictionary, NSString;
@protocol CRDataType, NSCopying, CRCoding;

#import <Foundation/Foundation.h>


@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding>

 {
    NSMutableDictionary *_clock;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)clockForUUID:(id)arg0 ;
-(NSUInteger)compare:(id)arg0 ;
-(NSUInteger)subclockForUUID:(id)arg0 ;
-(id)allUUIDs;
-(id)clockElementForUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithProtobufTimestamp:(*void)arg0 decoder:(id)arg1 ;
-(id)shortDescription;
-(id)sortedUUIDs;
-(id)timestampForReplica:(id)arg0 ;
-(id)tombstone;
-(void)encodeIntoProtobufTimestamp:(*void)arg0 coder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)incrementClockForUUID:(id)arg0 ;
-(void)maxClock:(NSUInteger)arg0 forUUID:(id)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)minusVectorTimestamp:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeUUID:(id)arg0 ;
-(void)setClock:(NSUInteger)arg0 forUUID:(id)arg1 ;
-(void)setClock:(NSUInteger)arg0 subclock:(NSUInteger)arg1 forUUID:(id)arg2 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif