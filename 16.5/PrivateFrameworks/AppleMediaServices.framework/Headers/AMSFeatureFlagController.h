// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFEATUREFLAGCONTROLLER_H
#define AMSFEATUREFLAGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface AMSFeatureFlagController : NSObject



+(BOOL)toggleFlags:(id)arg0 enabled:(BOOL)arg1 ;
+(void)verifyFlags;


@end


#endif