// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSCANPROXY_H
#define WFSCANPROXY_H

@class NSArray;
@protocol WFScanManagerScanProxy;

#import <Foundation/Foundation.h>

#import "WFClient.h"

@interface WFScanProxy : NSObject <WFScanManagerScanProxy>



@property (retain, nonatomic) WFClient *client; // ivar: _client
@property (readonly, nonatomic) CGFloat scanInterval;
@property (readonly, nonatomic) NSArray *scannableChannels;
@property (readonly, nonatomic, getter=isScanningAllowed) BOOL scanningAllowed;


+(id)scanProxyWithClient:(id)arg0 ;
-(id)initWithClient:(id)arg0 ;
-(void)initiateNoNetworksSoftError;
-(void)performScanWithRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif