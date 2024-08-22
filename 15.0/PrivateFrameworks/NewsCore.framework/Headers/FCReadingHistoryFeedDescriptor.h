// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCREADINGHISTORYFEEDDESCRIPTOR_H
#define FCREADINGHISTORYFEEDDESCRIPTOR_H



#import "FCPrivateZoneFeedDescriptor.h"

@interface FCReadingHistoryFeedDescriptor : FCPrivateZoneFeedDescriptor



-(id)backingHeadlineIDs;
-(id)initWithPrivateDataController:(id)arg0 identifier:(id)arg1 ;
-(id)initWithReadingHistory:(id)arg0 identifier:(id)arg1 ;
-(id)name;
-(id)readingHistory;


@end


#endif