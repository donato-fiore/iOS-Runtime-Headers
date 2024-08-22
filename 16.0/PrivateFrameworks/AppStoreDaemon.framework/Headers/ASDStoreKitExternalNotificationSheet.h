// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDSTOREKITEXTERNALNOTIFICATIONSHEET_H
#define ASDSTOREKITEXTERNALNOTIFICATIONSHEET_H


#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDStoreKitExternalNotificationSheet : NSObject {
    ASDServiceBroker *_serviceBroker;
}




+(id)interface;
+(id)sharedInstance;
-(id)init;
-(void)presentSheetIfNeededForProcessHandle:(id)arg0 completion:(id)arg1 ;


@end


#endif