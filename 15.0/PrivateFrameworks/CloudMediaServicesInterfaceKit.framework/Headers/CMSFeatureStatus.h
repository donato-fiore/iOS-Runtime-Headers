// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSFEATURESTATUS_H
#define CMSFEATURESTATUS_H


#import <Foundation/Foundation.h>


@interface CMSFeatureStatus : NSObject



+(BOOL)isBoltFeatureEnabled;
+(BOOL)isMultiPlayerEnabled;
+(void)enableSiriOverrides:(BOOL)arg0 ;


@end


#endif