// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTTELEPHONYNETWORKINFODELEGATEPLUS_H
#define CTTELEPHONYNETWORKINFODELEGATEPLUS_H

@class NSString;
@protocol CoreTelephonyClientDataDelegateInternal;

#import <Foundation/Foundation.h>

#import "CTTelephonyNetworkInfo.h"

@interface CTTelephonyNetworkInfoDelegatePlus : NSObject <CoreTelephonyClientDataDelegateInternal>



@property (nonatomic) queue clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CTTelephonyNetworkInfo *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;


@end


#endif