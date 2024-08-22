// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEORULECOLLECTIONKEY_H
#define VCVIDEORULECOLLECTIONKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCVideoRuleCollectionKey : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned char encodingType; // ivar: _encodingType
@property (readonly, nonatomic) int payload; // ivar: _payload
@property (readonly, nonatomic) unsigned char transportType; // ivar: _transportType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPayload:(int)arg0 transportType:(unsigned char)arg1 encodingType:(unsigned char)arg2 ;


@end


#endif