// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMGROUPCOMPOSERECIPIENT_H
#define CKIMGROUPCOMPOSERECIPIENT_H

@class CNComposeRecipientGroup, NSArray, NSString, NSDate;
@protocol CKIMComposeRecipient;


#import "CKIMComposeRecipient.h"

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup <CKIMComposeRecipient>



@property (readonly, nonatomic) NSArray *composeRecipients; // ivar: _composeRecipients
@property (retain, nonatomic) NSString *conversationGUID; // ivar: _conversationGUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *detailsString; // ivar: _detailsString
@property (retain, nonatomic) NSArray *handles; // ivar: _handles
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastMessageDate; // ivar: _lastMessageDate
@property (retain, nonatomic) CKIMComposeRecipient *matchingRecipient; // ivar: _matchingRecipient
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)composeRecipientWithConversation:(id)arg0 searchTerm:(id)arg1 matchingRecipient:(id)arg2 ;
-(BOOL)isRemovableFromSearchResults;
-(id)address;
-(id)compositeName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGUID:(id)arg0 displayString:(id)arg1 detailsString:(id)arg2 handles:(id)arg3 lastMessageDate:(id)arg4 searchTerm:(id)arg5 matchingRecipient:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)releaseIMReferences;


@end


#endif