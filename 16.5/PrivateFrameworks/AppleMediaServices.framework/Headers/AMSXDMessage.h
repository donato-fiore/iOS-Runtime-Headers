// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSXDMESSAGE_H
#define AMSXDMESSAGE_H

@class NSDictionary, NSString, NSDate;
@protocol NSSecureCoding, NSCopying, NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSXDDevice.h"

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (retain, nonatomic) AMSXDDevice *destination; // ivar: _destination
@property (nonatomic) CGFloat expirationInterval; // ivar: _expirationInterval
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isReply; // ivar: _isReply
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *messageID; // ivar: _messageID
@property (retain, nonatomic) NSObject<NSObject><NSSecureCoding> *object; // ivar: _object
@property (retain, nonatomic) NSString *objectClassName; // ivar: _objectClassName
@property (retain, nonatomic) AMSXDDevice *origin; // ivar: _origin
@property (nonatomic) NSInteger purpose; // ivar: _purpose
@property (retain, nonatomic) NSDate *receiptDate; // ivar: _receiptDate


+(BOOL)supportsSecureCoding;
+(id)_allowedClassNamesForDecoding;
+(id)_allowedClassesForDecoding;
+(id)messageFromProtoMessage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createProtoMessage;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 destination:(id)arg1 purpose:(NSInteger)arg2 object:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif