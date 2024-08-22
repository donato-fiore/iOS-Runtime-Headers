// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSCONVERSATIONSTATE_H
#define _MSCONVERSATIONSTATE_H

@class NSData, NSString, NSUUID, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSMessage.h"

@interface _MSConversationState : NSObject <NSSecureCoding>



@property (retain, nonatomic) MSMessage *activeMessage; // ivar: _activeMessage
@property (retain, nonatomic) NSData *conversationEngramID; // ivar: _conversationEngramID
@property (retain, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (retain, nonatomic) NSUUID *conversationIdentifier; // ivar: _conversationIdentifier
@property (copy, nonatomic) NSArray *draftAssetArchives; // ivar: _draftAssetArchives
@property (retain, nonatomic, setter=setiMessageLoginID:) NSString *iMessageLoginID; // ivar: _iMessageLoginID
@property (retain, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (retain, nonatomic) NSArray *recipientIdentifiers; // ivar: _recipientIdentifiers
@property (retain, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (retain, nonatomic) NSUUID *senderIdentifier; // ivar: _senderIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif