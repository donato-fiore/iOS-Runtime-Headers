// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTOREAMSBAGDELEGATEPACKAGE_H
#define MTSTOREAMSBAGDELEGATEPACKAGE_H

@class NSString;
@protocol MTDelegatePackage;

#import <Foundation/Foundation.h>

#import "MTConfigAMSMetricsDelegate.h"
#import "MTConvenienceEnvironmentDelegate.h"
#import "MTEventRecorderAMSMetricsDelegate.h"

@interface MTStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>



@property (retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate; // ivar: _configDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate; // ivar: _environmentDelegate
@property (retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate; // ivar: _eventRecorderDelegate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *hostAppBlock; // ivar: _hostAppBlock
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAMSBag:(id)arg0 ;
// -(id)initWithAMSBag:(id)arg0 containerId:(id)arg1 pageURLBlock:(id)arg2 resourceRevNumBlock:(unk)arg3 hostAppBlock:(id)arg4  ;


@end


#endif