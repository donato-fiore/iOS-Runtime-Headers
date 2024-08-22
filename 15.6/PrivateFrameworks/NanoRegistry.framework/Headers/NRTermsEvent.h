// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRTERMSEVENT_H
#define NRTERMSEVENT_H

@class NSString;
@protocol NSSecureCoding;


#import "NRPBTermsEvent.h"

@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding>



@property (nonatomic) BOOL flaggedForSend; // ivar: _flaggedForSend
@property (retain, nonatomic) NSString *termsDigest; // ivar: _termsDigest
@property (nonatomic) BOOL writable; // ivar: _writable


+(BOOL)supportsSecureCoding;
+(id)digestFromData:(id)arg0 ;
+(id)eventWithProtobuf:(id)arg0 ;
+(id)loadTermsWithPath:(id)arg0 ;
-(BOOL)isTermsAlreadyArchived;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceID:(id)arg0 ;
-(id)termsText;
-(void)_setEventType:(NSUInteger)arg0 ;
-(void)_setLoggingProcessName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveEventTextToFileIfNeeded;
-(void)saveTerms;
-(void)setAcknowledgedDeviceName:(id)arg0 ;
-(void)setAcknowledgedDeviceSerialNumber:(id)arg0 ;
-(void)setDisplayDeviceName:(id)arg0 ;
-(void)setDisplayDeviceSerialNumber:(id)arg0 ;
-(void)setDocumentationID:(id)arg0 ;
-(void)setEventDate:(CGFloat)arg0 ;
-(void)setEventType:(int)arg0 ;
-(void)setLoggingProcessName:(id)arg0 ;
-(void)setPresentationLocation:(int)arg0 ;
-(void)setPresentationReason:(id)arg0 ;
-(void)setTermsText:(id)arg0 ;
-(void)updateEventDate;


@end


#endif