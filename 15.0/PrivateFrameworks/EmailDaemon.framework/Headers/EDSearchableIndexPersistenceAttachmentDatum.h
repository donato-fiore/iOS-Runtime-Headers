// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSEARCHABLEINDEXPERSISTENCEATTACHMENTDATUM_H
#define EDSEARCHABLEINDEXPERSISTENCEATTACHMENTDATUM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject

@property (copy, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (copy, nonatomic) NSString *attachmentPersistentID; // ivar: _attachmentPersistentID
@property (nonatomic) NSInteger mailboxID; // ivar: _mailboxID
@property (copy, nonatomic) NSString *messagePersistentID; // ivar: _messagePersistentID
@property (copy, nonatomic) NSString *name; // ivar: _name




@end


#endif