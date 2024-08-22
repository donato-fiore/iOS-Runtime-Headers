// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSFAIRPLAYINFO_H
#define HSFAIRPLAYINFO_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HSFairPlayInfo : NSObject {
    NSObject<OS_dispatch_queue> *_sapQueue;
    *void _hwInfo;
    *void _session;
}


@property (readonly, nonatomic) NSString *deviceGUID;


-(BOOL)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg0 ;
-(id)_hexStringForData:(id)arg0 ;
-(id)beginNegotiationWithSAPVersion:(unsigned int)arg0 ;
-(id)continueNegotationWithSAPVersion:(unsigned int)arg0 data:(id)arg1 isComplete:(*BOOL)arg2 ;
-(id)init;
-(id)securityInfoForURL:(id)arg0 ;
-(void)dealloc;
-(void)endSecuritySession;


@end


#endif