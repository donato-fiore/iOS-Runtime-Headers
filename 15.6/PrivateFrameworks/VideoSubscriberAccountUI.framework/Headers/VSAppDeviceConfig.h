// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAPPDEVICECONFIG_H
#define VSAPPDEVICECONFIG_H

@class NSString, NSOperationQueue;
@protocol IKAppDeviceConfig;

#import <Foundation/Foundation.h>


@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (readonly) Class superclass;


-(BOOL)isTimeZoneSet;
-(NSUInteger)preferredVideoFormat;
-(NSUInteger)preferredVideoPreviewFormat;
-(id)init;
-(id)storeFrontCountryCode;
-(id)systemLanguage;
-(id)timeZone;
-(struct CGSize )screenSize;


@end


#endif