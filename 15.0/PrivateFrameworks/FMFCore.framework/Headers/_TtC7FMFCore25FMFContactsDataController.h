// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7FMFCORE25FMFCONTACTSDATACONTROLLER_H
#define _TTC7FMFCORE25FMFCONTACTSDATACONTROLLER_H

@class SwiftObject;



@interface _TtC7FMFCore25FMFContactsDataController : SwiftObject {
    ? identifier;
    ? isSnapshotMode;
    ? delegate;
    ? contactStore;
    ? contactMatchingQueue;
    ? lastContactSearchDate;
    ? lastContactUpdateDate;
    ? contactRecords;
}




-(void)contactStoreChangedWithNotification:(id)arg0 ;


@end


#endif