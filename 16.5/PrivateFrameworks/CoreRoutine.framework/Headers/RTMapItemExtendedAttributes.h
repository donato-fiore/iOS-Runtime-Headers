// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTMAPITEMEXTENDEDATTRIBUTES_H
#define RTMAPITEMEXTENDEDATTRIBUTES_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *addressIdentifier; // ivar: _addressIdentifier
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) CGFloat wifiConfidence; // ivar: _wifiConfidence
@property (nonatomic) NSInteger wifiFingerprintLabelType; // ivar: _wifiFingerprintLabelType


+(BOOL)supportsSecureCoding;
+(id)fingerprintLabelTypeToString:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMapItemExtendedAttributes:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAddressIdentifier:(id)arg0 isMe:(BOOL)arg1 wifiConfidence:(CGFloat)arg2 wifiFingerprintLabelType:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtendedAttributesMO:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 addressIdentifier:(id)arg1 isMe:(BOOL)arg2 wifiConfidence:(CGFloat)arg3 wifiFingerprintLabelType:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif