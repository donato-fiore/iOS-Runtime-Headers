// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSAPPACTIVITYSTATUS_H
#define NMSAPPACTIVITYSTATUS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NMSAppActivityStatus : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID


-(BOOL)_exceedsDormancyInterval:(CGFloat)arg0 forDate:(id)arg1 ;
-(BOOL)isAppContentDormant;
-(BOOL)isAppContentDormantWithInterval:(CGFloat)arg0 ;
-(BOOL)isAppDownloadingDormant;
-(BOOL)isAppDownloadingDormantWithInterval:(CGFloat)arg0 ;
-(CGFloat)_defaultDormancyInterval;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;


@end


#endif