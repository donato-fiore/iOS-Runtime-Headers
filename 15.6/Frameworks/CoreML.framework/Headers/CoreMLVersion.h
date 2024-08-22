// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREMLVERSION_H
#define COREMLVERSION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CoreMLVersion : NSObject

@property (copy, nonatomic) NSNumber *frameworkVersionNumber; // ivar: _frameworkVersionNumber


+(id)getInternalFrameworkVersion;
-(id)init;


@end


#endif