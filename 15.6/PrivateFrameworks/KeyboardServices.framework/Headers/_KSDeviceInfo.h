// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSDEVICEINFO_H
#define _KSDEVICEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _KSDeviceInfo : NSObject

@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (copy, nonatomic) NSString *swVersion; // ivar: _swVersion


+(id)ksDecviceWithName:(id)arg0 swVersion:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 ;
+(id)ksDecviceWithiCloudDeviceInfo:(id)arg0 ;
+(id)ksDeviceWithName:(id)arg0 needsUpgrade:(BOOL)arg1 ;
+(id)ksDeviceWithName:(id)arg0 swVersion:(id)arg1 ;


@end


#endif