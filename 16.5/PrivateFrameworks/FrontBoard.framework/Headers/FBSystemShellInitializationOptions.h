// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSYSTEMSHELLINITIALIZATIONOPTIONS_H
#define FBSYSTEMSHELLINITIALIZATIONOPTIONS_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSString *independentWatchdogPortName; // ivar: _independentWatchdogPortName
@property (readonly, nonatomic) BOOL initializeDisplayManager; // ivar: _initializeDisplayManager
@property (readonly, nonatomic) BOOL initializeReadyForInteraction; // ivar: _initializeReadyForInteraction
@property (readonly, copy, nonatomic) id *registerAdditionalServicesBlock; // ivar: _registerServicesBlock
@property (readonly, nonatomic) BOOL resetDarkBootState; // ivar: _resetDarkBootState
@property (readonly, nonatomic) BOOL shouldWaitForMigrator; // ivar: _shouldWaitForMigrator
@property (readonly, nonatomic) CGFloat systemSleepInterval; // ivar: _systemSleepInterval


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif