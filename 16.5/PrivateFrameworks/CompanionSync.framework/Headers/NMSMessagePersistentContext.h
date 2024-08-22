// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMESSAGEPERSISTENTCONTEXT_H
#define NMSMESSAGEPERSISTENTCONTEXT_H

@class NSDate, NSString, NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NMSMessagePersistentContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic, getter=isFromRequest) BOOL fromRequest; // ivar: _fromRequest
@property (copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (retain, nonatomic) NSDictionary *idsOptions; // ivar: _idsOptions
@property (nonatomic) unsigned short messageID; // ivar: _messageID
@property (nonatomic) BOOL processAcked; // ivar: _processAcked
@property (nonatomic) BOOL sendAcked; // ivar: _sendAcked
@property (copy, nonatomic) NSSet *targetDeviceIDs; // ivar: _targetDeviceIDs
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif