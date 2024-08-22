// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCREADINGLISTFEEDDESCRIPTOR_H
#define FCREADINGLISTFEEDDESCRIPTOR_H



#import "FCPrivateZoneFeedDescriptor.h"

@interface FCReadingListFeedDescriptor : FCPrivateZoneFeedDescriptor



-(id)backingHeadlineIDs;
-(id)initWithPrivateDataController:(id)arg0 identifier:(id)arg1 ;
-(id)initWithReadingList:(id)arg0 identifier:(id)arg1 ;
-(id)name;
-(id)readingList;


@end


#endif