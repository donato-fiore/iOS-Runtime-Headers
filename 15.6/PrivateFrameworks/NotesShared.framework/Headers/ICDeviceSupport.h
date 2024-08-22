// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICESUPPORT_H
#define ICDEVICESUPPORT_H


#import <Foundation/Foundation.h>


@interface ICDeviceSupport : NSObject



+(BOOL)deviceIsIPad;
+(BOOL)deviceSupportsFaceID;
+(BOOL)deviceSupportsFirstGenPencil;
+(BOOL)deviceSupportsPencil;
+(BOOL)deviceSupportsSystemPaper;
+(BOOL)deviceSupportsTouchID;
+(BOOL)isRunningUnitTests;
+(id)notesProductType;
+(id)productBuildVersion;
+(id)productName;
+(id)productVersion;
+(struct CGSize )notesDeviceDrawingSize;


@end


#endif