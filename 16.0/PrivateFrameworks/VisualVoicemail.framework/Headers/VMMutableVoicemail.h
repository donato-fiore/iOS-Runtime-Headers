// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMMUTABLEVOICEMAIL_H
#define VMMUTABLEVOICEMAIL_H

@class NSString, NSURL, NSDate;


#import "VMVoicemail.h"

@interface VMMutableVoicemail : VMVoicemail

@property (copy, nonatomic) NSString *callbackDestinationID;
@property (copy, nonatomic) NSString *callbackISOCountryCode;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) CGFloat duration;
@property (nonatomic) NSUInteger flags;
@property (nonatomic) NSUInteger identifier;
@property (nonatomic, getter=isRead) BOOL read;
@property (copy, nonatomic) NSString *receiverDestinationID;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (copy, nonatomic) NSString *receiverLabelID;
@property (nonatomic) NSUInteger remoteUID;
@property (copy, nonatomic) NSString *senderDestinationID;
@property (copy, nonatomic) NSString *senderISOCountryCode;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic, getter=isTrashed) BOOL trashed;




@end


#endif