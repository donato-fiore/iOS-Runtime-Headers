// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSTESTINGSUPPORTNOTIFICATIONGENERATOR_H
#define CSTESTINGSUPPORTNOTIFICATIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CSTestingSupportNotificationGenerator : NSObject {
    NSInteger _sequenceNumber;
}




-(id)_nextNotificationRequest;
-(void)postNewNotificationToDestination:(id)arg0 ;


@end


#endif