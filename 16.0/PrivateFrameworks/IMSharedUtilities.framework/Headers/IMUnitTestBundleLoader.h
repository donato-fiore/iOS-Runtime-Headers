// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMUNITTESTBUNDLELOADER_H
#define IMUNITTESTBUNDLELOADER_H


#import <Foundation/Foundation.h>

#import "IMUnitTestLogger.h"

@interface IMUnitTestBundleLoader : NSObject

@property (readonly) IMUnitTestLogger *logger; // ivar: _logger


-(BOOL)loadTestBundle:(id)arg0 bundle:(*id)arg1 error:(*id)arg2 ;
-(id)initWithLogger:(id)arg0 ;


@end


#endif