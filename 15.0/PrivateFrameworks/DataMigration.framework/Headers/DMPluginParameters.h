// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMPLUGINPARAMETERS_H
#define DMPLUGINPARAMETERS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface DMPluginParameters : NSObject

@property (copy, nonatomic) NSString *backupDeviceUUID; // ivar: _backupDeviceUUID
@property (retain, nonatomic) NSDictionary *dispositionSupersetOfContext; // ivar: _dispositionSupersetOfContext


+(id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDispositionSupersetOfContext:(id)arg0 backupDeviceUUID:(id)arg1 ;


@end


#endif