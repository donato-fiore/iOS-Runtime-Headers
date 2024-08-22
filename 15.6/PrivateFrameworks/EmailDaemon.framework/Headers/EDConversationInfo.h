// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCONVERSATIONINFO_H
#define EDCONVERSATIONINFO_H

@class NSManagedObject, NSString, NSData, NSDate;



@interface EDConversationInfo : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *conversationUUID;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSString *messageIds;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL notifyMe;


+(id)fetchRequest;


@end


#endif