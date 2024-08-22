// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVOUTPUTDEVICELEGACYFRECENTSREADER_H
#define AVOUTPUTDEVICELEGACYFRECENTSREADER_H

@class NSString, NSArray;
@protocol AVOutputDeviceFrecentsReading;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceLegacyFrecentsReader : NSObject <AVOutputDeviceFrecentsReading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultFrecentsReader;
-(id)frecencyInfoForDeviceWithID:(id)arg0 ;


@end


#endif