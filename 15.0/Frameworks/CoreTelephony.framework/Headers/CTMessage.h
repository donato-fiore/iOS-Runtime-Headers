// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTMESSAGE_H
#define CTMESSAGE_H

@class NSMutableDictionary, NSString, NSDate, NSArray, NSDictionary, NSUUID;
@protocol CTMessageAddress><NSCopying;

#import <Foundation/Foundation.h>

#import "CTXPCServiceSubscriptionContext.h"
#import "CTPhoneNumber.h"

@interface CTMessage : NSObject {
    NSMutableDictionary *_contentTypeParams;
}


@property (nonatomic) BOOL bypassSupportedMessageModesCheck; // ivar: _bypassSupportedMessageModesCheck
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly) NSDate *date; // ivar: _date
@property (readonly) NSArray *items; // ivar: _items
@property (nonatomic) unsigned int messageId; // ivar: _messageId
@property (nonatomic) int messageType; // ivar: _messageType
@property (readonly) NSDictionary *rawHeaders; // ivar: _rawHeaders
@property (readonly) NSArray *recipients; // ivar: _recipients
@property (readonly) unsigned int replaceMessage; // ivar: _replaceMessage
@property (readonly, nonatomic) BOOL replyEnabled; // ivar: _replyEnabled
@property (copy, nonatomic) NSObject<CTMessageAddress><NSCopying> *sender; // ivar: _sender
@property (copy, nonatomic) CTPhoneNumber *serviceCenter; // ivar: _serviceCenter
@property (nonatomic) int smsType; // ivar: _smsType
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uuid


-(id)addData:(id)arg0 withContentType:(id)arg1 ;
-(id)addPart:(id)arg0 ;
-(id)addText:(id)arg0 ;
-(id)allContentTypeParameterNames;
-(id)contentTypeParameterWithName:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDate:(id)arg0 ;
-(void)addContentTypeParameterWithName:(id)arg0 value:(id)arg1 ;
-(void)addEmailRecipient:(id)arg0 ;
-(void)addPhoneRecipient:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)removePartAtIndex:(NSUInteger)arg0 ;
-(void)removeRecipient:(id)arg0 ;
-(void)removeRecipientsInArray:(id)arg0 ;
-(void)setRecipient:(id)arg0 ;


@end


#endif