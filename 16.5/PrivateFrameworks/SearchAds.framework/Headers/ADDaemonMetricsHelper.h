// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADDAEMONMETRICSHELPER_H
#define ADDAEMONMETRICSHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADDaemonMetricsHelper : NSObject

@property (readonly, nonatomic) NSString *adamID; // ivar: _adamID


-(id)initWithAdamID:(id)arg0 ;
-(void)downloadCompleted;
-(void)downloadInitiated;
-(void)installCompleted;
-(void)purchaseCompleted;


@end


#endif