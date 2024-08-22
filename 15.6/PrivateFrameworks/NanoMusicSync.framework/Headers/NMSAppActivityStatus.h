// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSAPPACTIVITYSTATUS_H
#define NMSAPPACTIVITYSTATUS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NMSAppActivityStatus : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID


-(BOOL)_exceedsDormancyIntervalForDate:(id)arg0 ;
-(BOOL)isAppContentDormant;
-(BOOL)isAppDormant;
-(BOOL)isAppDownloadingDormant;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;


@end


#endif