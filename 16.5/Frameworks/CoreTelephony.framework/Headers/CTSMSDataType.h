// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSMSDATATYPE_H
#define CTSMSDATATYPE_H

@class NSNumber, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSNumber *ctFormat; // ivar: _ctFormat
@property (retain, nonatomic) NSData *hexPdu; // ivar: _hexPdu
@property (nonatomic) BOOL parseSMSC; // ivar: _parseSMSC
@property (nonatomic) NSNumber *transport; // ivar: _transport
@property (nonatomic) BOOL waitForAck; // ivar: _waitForAck


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTSMSDataType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif