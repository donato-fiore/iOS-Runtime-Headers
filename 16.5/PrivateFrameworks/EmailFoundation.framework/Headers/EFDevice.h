// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFDEVICE_H
#define EFDEVICE_H

@class NSString, NSUUID;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EFDevice : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property BOOL isInternal; // ivar: _isInternal
@property (readonly) BOOL isRunningNative;
@property (readonly) NSString *platformName;
@property (readonly) Class superclass;


+(id)currentDevice;
+(id)log;
+(id)testingDeviceWithInternal:(BOOL)arg0 ;
+(void)executeWithDeviceIsExternal:(id)arg0 ;
+(void)executeWithDeviceIsInternal:(id)arg0 ;
+(void)setCurrentDevice:(id)arg0 ;
-(BOOL)isAppleSilicon;
-(BOOL)isPlatform:(NSInteger)arg0 ;
-(id)_init;


@end


#endif