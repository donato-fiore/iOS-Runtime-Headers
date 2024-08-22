// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSHAREDWITHYOUUTILITIES_H
#define IMSHAREDWITHYOUUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMSharedWithYouUtilities : NSObject



+(BOOL)isSharedWithYouEnabled;
+(id)defaultAppBundleIDs;
+(void)updateSharedWithYouEnabledForApp:(id)arg0 to:(BOOL)arg1 ;
+(void)updateSharedWithYouEnabledTo:(BOOL)arg0 ;


@end


#endif