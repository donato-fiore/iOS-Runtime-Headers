// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTCHANGESOURCEEVENTDISPLAYTAPMETADATA_H
#define BLSBACKLIGHTCHANGESOURCEEVENTDISPLAYTAPMETADATA_H



#import "BLSBacklightChangeSourceEventMetadata.h"

@interface BLSBacklightChangeSourceEventDisplayTapMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) CGPoint position; // ivar: _position


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPosition:(struct CGPoint )arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif