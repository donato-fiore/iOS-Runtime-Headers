// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUDASHBOARDCLIENT_H
#define CUDASHBOARDCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUDashboardClient : NSObject

@property (copy, nonatomic) NSString *server; // ivar: _server


-(int)_logCStr:(char *)arg0 length:(NSUInteger)arg1 ;
-(int)activate;
-(int)logJSON:(id)arg0 ;
-(int)logf:(char *)arg0 ;
-(int)logv:(char *)arg0 args:(char *)arg1 ;
-(void)invalidate;


@end


#endif