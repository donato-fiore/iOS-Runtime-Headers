// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC22HOMEAUTOMATIONINTERNAL9HOMESTORE_H
#define _TTC22HOMEAUTOMATIONINTERNAL9HOMESTORE_H

@class SwiftObject;



@interface _TtC22HomeAutomationInternal9HomeStore : SwiftObject {
    ? latestHomeStore;
    ? accessQueue;
    ? updateQueue;
    ? syncDataTimeoutInMillisec;
    ? loadSucceeded;
    ? syncDataError;
    ? _homes;
    ? _zones;
    ? _rooms;
    ? _groups;
    ? _scenes;
    ? _accessories;
    ? _services;
}




-(void)handleHomeStoreUpdates;


@end


#endif