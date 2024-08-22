// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MESSAGEINBOXENTRY_H
#define MESSAGEINBOXENTRY_H

@class NSManagedObject, NSString;



@interface MessageInboxEntry : NSManagedObject

@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *friendCode;
@property (copy, nonatomic) NSString *senderAlias;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *value;


+(id)fetchRequest;


@end


#endif