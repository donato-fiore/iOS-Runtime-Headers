// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES19ACTIVITYALERTCLIENT_H
#define _TTC18ACTIVITYUISERVICES19ACTIVITYALERTCLIENT_H

@protocol _TtP18ActivityUIServices27ActivityAlertClientDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices19ActivityAlertClient : NSObject {
    ? alertClient;
}


@property (nonatomic, weak) NSObject<_TtP18ActivityUIServices27ActivityAlertClientDelegate_> *delegate; // ivar: delegate


-(id)init;


@end


#endif