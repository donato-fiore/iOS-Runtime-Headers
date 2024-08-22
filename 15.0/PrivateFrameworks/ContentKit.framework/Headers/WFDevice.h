// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDEVICE_H
#define WFDEVICE_H

@class NSArray, NSString;
@protocol WFNaming;

#import <Foundation/Foundation.h>


@interface WFDevice : NSObject <WFNaming>



@property (readonly, nonatomic) NSArray *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSInteger chipID;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSInteger idiom;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *localizedWiFiDisplayName;
@property (readonly, nonatomic) NSString *marketingName;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger platform;
@property (readonly, nonatomic) CGRect screenBounds;
@property (readonly, nonatomic) CGFloat screenCornerRadius;
@property (readonly, nonatomic) CGFloat screenScale;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, copy, nonatomic) NSString *wfName;


+(id)currentDevice;
-(BOOL)hasCapability:(id)arg0 ;
-(id)_deviceInfoForKey:(struct __CFString *)arg0 ;
-(id)description;


@end


#endif