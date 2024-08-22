// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTCLOUDKITCONTAINEREVENTREQUEST_H
#define NSPERSISTENTCLOUDKITCONTAINEREVENTREQUEST_H



#import "NSPersistentStoreRequest.h"
#import "NSFetchRequest.h"

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {
    NSFetchRequest *_ckEventFetchRequest;
}


@property NSInteger resultType; // ivar: _resultType


+(id)fetchEventsAfterDate:(id)arg0 ;
+(id)fetchEventsAfterEvent:(id)arg0 ;
+(id)fetchEventsMatchingFetchRequest:(id)arg0 ;
+(id)fetchRequestForEvents;
-(NSUInteger)requestType;
-(id)initWithCKEventFetchRequest:(id)arg0 ;
-(void)dealloc;


@end


#endif