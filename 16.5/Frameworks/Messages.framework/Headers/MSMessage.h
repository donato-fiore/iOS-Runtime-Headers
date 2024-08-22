// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMESSAGE_H
#define MSMESSAGE_H

@class NSURL, NSData, NSString, NSError, NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSMessageLayout.h"
#import "MSSession.h"

@interface MSMessage : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSData *_data; // ivar: __data
@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (copy, nonatomic) NSString *breadcrumbText; // ivar: _breadcrumbText
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (copy, nonatomic) MSMessageLayout *layout; // ivar: _layout
@property (nonatomic, getter=isPending) BOOL pending; // ivar: _pending
@property (nonatomic) BOOL requiresValidation; // ivar: _requiresValidation
@property (retain, nonatomic) NSUUID *senderParticipantIdentifier; // ivar: _senderParticipantIdentifier
@property (readonly, nonatomic) MSSession *session; // ivar: _session
@property (nonatomic) BOOL shouldExpire; // ivar: _shouldExpire
@property (copy, nonatomic) NSString *statusText; // ivar: _statusText
@property (copy, nonatomic) NSString *summaryText; // ivar: _summaryText
@property (retain, nonatomic) NSDate *time; // ivar: _time


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_sanitizedCopy;
-(id)_shallowCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)_mergeSanitizedDataFromMessage:(id)arg0 ;
-(void)_sanitize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif