// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSTYLEOWNERUUIDENCODER_H
#define TSCHSTYLEOWNERUUIDENCODER_H


#import <Foundation/Foundation.h>


@interface TSCHStyleOwnerUUIDEncoder : NSObject {
    unsigned char _UUID;
    NSUInteger _index;
}




+(id)UUIDEncoder;
+(id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg0 ;
+(id)styleOwnerBaseUUID;
+(id)styleOwnerBaseUUIDString;
-(BOOL)hasSpaceToEncodeNumberOfBytes:(NSUInteger)arg0 ;
-(id)encodedUUID;
-(id)init;
-(void)encodeByte:(unsigned char)arg0 ;
-(void)encodeUInt64:(NSUInteger)arg0 ;
-(void)encodeUInt64FromNSUInteger:(NSUInteger)arg0 ;


@end


#endif