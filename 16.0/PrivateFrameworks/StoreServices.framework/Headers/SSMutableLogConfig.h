// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMUTABLELOGCONFIG_H
#define SSMUTABLELOGCONFIG_H

@class NSString;
@protocol NSCopying;


#import "SSLogConfig.h"

@interface SSMutableLogConfig : SSLogConfig <NSCopying>



@property (copy, nonatomic) NSString *category;
@property (nonatomic) NSUInteger environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) BOOL writeToDisk;




@end


#endif