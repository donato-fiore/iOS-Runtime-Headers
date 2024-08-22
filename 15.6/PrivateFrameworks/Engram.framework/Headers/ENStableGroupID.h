// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENSTABLEGROUPID_H
#define ENSTABLEGROUPID_H

@class NSData, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *dataRepresentation;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(NSUInteger)stableGroupIDLength;
+(id)stableGroupIDWithCurrentTime;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_mutableDataRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(int)customUUIDCompare:(unsigned char)arg0 u2:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif