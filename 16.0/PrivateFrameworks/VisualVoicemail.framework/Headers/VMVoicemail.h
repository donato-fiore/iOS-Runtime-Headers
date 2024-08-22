// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMVOICEMAIL_H
#define VMVOICEMAIL_H

@class NSString, NSData, NSURL, NSDate;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VMVoicemailTranscript.h"

@interface VMVoicemail : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (copy, nonatomic) NSString *callbackDestinationID; // ivar: _callbackDestinationID
@property (copy, nonatomic) NSString *callbackISOCountryCode; // ivar: _callbackISOCountryCode
@property (readonly, nonatomic) NSString *callbackNumber;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isDataAvailable) BOOL dataAvailable;
@property (nonatomic, getter=isDataAvailable) BOOL dataAvailable;
@property (readonly, nonatomic) NSString *dataPath;
@property (retain, nonatomic) NSURL *dataURL; // ivar: _dataURL
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger flags;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasCallbackNumber;
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) NSInteger mailboxType;
@property (nonatomic, getter=isRead) BOOL read;
@property (copy, nonatomic) NSString *receiverDestinationID; // ivar: _receiverDestinationID
@property (copy, nonatomic) NSString *receiverISOCountryCode; // ivar: _receiverISOCountryCode
@property (copy, nonatomic) NSString *receiverLabelID; // ivar: _receiverLabelID
@property (nonatomic) NSUInteger remoteUID; // ivar: _remoteUID
@property (readonly, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *senderDestinationID; // ivar: _senderDestinationID
@property (copy, nonatomic) NSString *senderISOCountryCode; // ivar: _senderISOCountryCode
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic) VMVoicemailTranscript *transcript;
@property (nonatomic, getter=isTranscriptionAvailable) BOOL transcriptionAvailable;
@property (readonly, nonatomic, getter=isTranscriptionRated) BOOL transcriptionRated;
@property (readonly, nonatomic) NSUInteger transcriptionState;
@property (retain, nonatomic) NSURL *transcriptionURL; // ivar: _transcriptionURL
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUnread) BOOL unread;


+(BOOL)supportsSecureCoding;
+(NSInteger)mailboxTypeForFlags:(NSUInteger)arg0 ;
+(NSUInteger)flagsByApplyingMailboxType:(NSInteger)arg0 toFlags:(NSUInteger)arg1 ;
-(BOOL)doesNotHaveFlags:(NSUInteger)arg0 ;
-(BOOL)hasFlags:(NSUInteger)arg0 ;
-(BOOL)hasSameContent:(id)arg0 ;
-(BOOL)hasSameFlags:(id)arg0 ;
-(BOOL)isContactSuggested:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMessage:(id)arg0 ;
-(BOOL)isTranscribing;
-(BOOL)wasTranscriptionAttempted;
-(NSUInteger)hash;
-(id)contactUsingContactStore:(id)arg0 ;
-(id)contactUsingContactStore:(id)arg0 withKeysToFetch:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayLabelUsingContactStore:(id)arg0 ;
-(id)displayNameUsingContactStore:(id)arg0 ;
-(id)flagDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithVoicemailMessage:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setFlag:(NSUInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif