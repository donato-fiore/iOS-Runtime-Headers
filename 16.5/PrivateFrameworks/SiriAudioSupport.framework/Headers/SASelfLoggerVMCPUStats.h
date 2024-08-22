// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASELFLOGGERVMCPUSTATS_H
#define SASELFLOGGERVMCPUSTATS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASelfLoggerVMCPUStats : NSObject <NSSecureCoding>

 {
    ? mwtId;
    ? snapshotStage;
    ? cpuTicksUser;
    ? cpuTicksSystem;
    ? cpuTicksIdle;
    ? cpuTicksNice;
    ? compressions;
    ? decompressions;
    ? pageins;
    ? faults;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif