// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTREADERHELPER_H
#define SIGNPOSTREADERHELPER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SignpostReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer; // ivar: _connectionToServer


-(id)createXPCConnection;
-(id)customGetNearestMidnight;
-(id)generateSignpostSubmissionWithTagConfig:(id)arg0 withAllowlist:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 includeSPFile:(BOOL)arg4 ;
-(id)getSignpostMetricsWithStartDate:(id)arg0 withEndDate:(id)arg1 processMXSignpost:(BOOL)arg2 ;
-(id)getSignpostSummaryWithAllowlist:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(id)processSignpostWithConfig:(id)arg0 withServiceType:(int)arg1 ;
-(void)closeXPCConnection;


@end


#endif