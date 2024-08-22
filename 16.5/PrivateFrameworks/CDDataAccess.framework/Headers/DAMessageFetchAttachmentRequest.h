// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAMESSAGEFETCHATTACHMENTREQUEST_H
#define DAMESSAGEFETCHATTACHMENTREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAMessageFetchAttachmentRequest : NSObject

@property (copy, nonatomic) NSString *attachmentName; // ivar: _attachmentName
@property (copy, nonatomic) NSString *messageID; // ivar: _messageID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAttachmentName:(id)arg0 andMessageServerID:(id)arg1 ;


@end


#endif