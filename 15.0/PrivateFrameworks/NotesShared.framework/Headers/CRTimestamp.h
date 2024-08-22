// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTIMESTAMP_H
#define CRTIMESTAMP_H

@class NSString, NSUUID;
@protocol CRDataType, CREquatable, NSCopying, CRCoding;

#import <Foundation/Foundation.h>


@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding>



@property (nonatomic) NSInteger counter; // ivar: _counter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *replica; // ivar: _replica
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimestamp:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)earlierTimestamp:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithProtobufTimestamp:(*void)arg0 decoder:(id)arg1 ;
-(id)initWithReplica:(id)arg0 andCounter:(NSInteger)arg1 ;
-(id)laterTimestamp:(id)arg0 ;
-(id)nextTimestamp;
-(id)nextTimestampForReplica:(id)arg0 ;
-(id)shortDescription;
-(id)tombstone;
-(void)encodeIntoProtobufTimestamp:(*void)arg0 coder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif