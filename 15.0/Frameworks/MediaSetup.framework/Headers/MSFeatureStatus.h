// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSFEATURESTATUS_H
#define MSFEATURESTATUS_H


#import <Foundation/Foundation.h>


@interface MSFeatureStatus : NSObject



+(BOOL)isPrimaryUserEnabled;
+(BOOL)isRadioSupportEnabled;


@end


#endif