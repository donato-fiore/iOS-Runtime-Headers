// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASMSSMS_H
#define SASMSSMS_H

@class NSURL, NSArray, NSString, NSDate, NSNumber;


#import "SADomainObject.h"
#import "SAAppInfo.h"
#import "SAPersonAttribute.h"
#import "SASmsSms.h"

@interface SASmsSms : SADomainObject

@property (retain, nonatomic) SAAppInfo *appInfo;
@property (copy, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSString *chatIdentifier;
@property (copy, nonatomic) NSDate *dateLastMessageReadInThread;
@property (copy, nonatomic) NSDate *dateReadingStarted;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameId;
@property (nonatomic) BOOL hasGroupName;
@property (copy, nonatomic) NSNumber *isAudioMessage;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSArray *msgRecipients;
@property (retain, nonatomic) SAPersonAttribute *msgSender;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (retain, nonatomic) SASmsSms *referencedMessage;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timezoneId;


+(id)sms;
+(id)smsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif