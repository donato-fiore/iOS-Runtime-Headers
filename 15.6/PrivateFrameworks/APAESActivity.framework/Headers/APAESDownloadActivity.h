// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APAESDOWNLOADACTIVITY_H
#define APAESDOWNLOADACTIVITY_H

@class APXPCActivityCriteria, NSString, APXPCActivity, NSXPCConnection;
@protocol APXPCActivityDelegate, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface APAESDownloadActivity : NSObject <APXPCActivityDelegate>



@property (readonly, nonatomic) APXPCActivityCriteria *criteria;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // ivar: _osTransaction
@property (retain, nonatomic) APXPCActivity *processingActivity; // ivar: _processingActivity
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *taskID;


-(BOOL)deferActivity:(id)arg0 ;
-(BOOL)runActivity:(id)arg0 ;
-(void)terminateActivity:(id)arg0 ;


@end


#endif