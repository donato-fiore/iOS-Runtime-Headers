// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APMUTABLELOGCONFIG_H
#define APMUTABLELOGCONFIG_H

@class NSString;
@protocol NSCopying;


#import "APLogConfig.h"

@interface APMutableLogConfig : APLogConfig <NSCopying>



@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;




@end


#endif