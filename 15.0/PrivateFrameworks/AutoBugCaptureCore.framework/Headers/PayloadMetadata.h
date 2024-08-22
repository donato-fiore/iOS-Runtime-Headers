// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAYLOADMETADATA_H
#define PAYLOADMETADATA_H

@class NSMutableArray, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PayloadMetadata : NSObject

@property (nonatomic) NSUInteger apnsIdentifier; // ivar: _apnsIdentifier
@property (readonly, nonatomic) NSMutableArray *attachmentFileInfos; // ivar: _attachmentFileInfos
@property (readonly, nonatomic) NSString *caseID; // ivar: _caseID
@property (readonly, nonatomic) CGFloat caseTimestamp; // ivar: _caseTimestamp
@property (nonatomic) short payloadPreflightStatus; // ivar: _payloadPreflightStatus
@property (nonatomic) NSInteger radarID; // ivar: _radarID
@property (retain, nonatomic) NSDate *receivedTime; // ivar: _receivedTime
@property (readonly, nonatomic) BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (copy, nonatomic) NSString *token; // ivar: _token
@property (nonatomic) NSInteger urgency; // ivar: _urgency
@property (readonly, nonatomic) NSUInteger userConsentState; // ivar: _userConsentState


+(BOOL)uploadRequiresConsent:(id)arg0 ;
+(void)initialize;
-(BOOL)validateAttachmentFiles;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCaseIdentifier:(id)arg0 ;
-(void)requestUserConsent:(id)arg0 reply:(id)arg1 ;


@end


#endif