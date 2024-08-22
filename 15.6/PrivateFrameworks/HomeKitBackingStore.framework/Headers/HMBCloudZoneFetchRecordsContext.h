// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDZONEFETCHRECORDSCONTEXT_H
#define HMBCLOUDZONEFETCHRECORDSCONTEXT_H

@class HMFObject, NAFuture, NSSet;



@interface HMBCloudZoneFetchRecordsContext : HMFObject

@property (readonly) NAFuture *future; // ivar: _future
@property (readonly, copy) NSSet *recordIDs; // ivar: _recordIDs


-(id)initWithRecordIDs:(id)arg0 future:(id)arg1 ;


@end


#endif