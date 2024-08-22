// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMESSAGE_H
#define WFMESSAGE_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFMessage : NSObject <NSCopying, NSSecureCoding, WFNaming>



@property (readonly, copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, copy, nonatomic) NSArray *recipientContactIDs; // ivar: _recipientContactIDs
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, copy, nonatomic) NSString *senderContactID; // ivar: _senderContactID
@property (readonly, copy, nonatomic) NSArray *senderHandles; // ivar: _senderHandles
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 conversationID:(id)arg1 recipientContactIDs:(id)arg2 recipients:(id)arg3 senderContactID:(id)arg4 senderHandles:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif