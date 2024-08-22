// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12IMDAEMONCORE28PERSISTEDCOLLABORATIONNOTICE_H
#define _TTC12IMDAEMONCORE28PERSISTEDCOLLABORATIONNOTICE_H

@class NSManagedObject, NSDate, NSString, NSData;



@interface _TtC12IMDaemonCore28PersistedCollaborationNotice : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *dateViewed;
@property (nonatomic, copy) NSString *guidString;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *senderHandle;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) short version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif