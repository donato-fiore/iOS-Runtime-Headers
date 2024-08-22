// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSBACKLIGHTCHANGESOURCEEVENTSUPPRESSIONMETADATA_H
#define BLSBACKLIGHTCHANGESOURCEEVENTSUPPRESSIONMETADATA_H



#import "BLSBacklightChangeSourceEventMetadata.h"

@interface BLSBacklightChangeSourceEventSuppressionMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif