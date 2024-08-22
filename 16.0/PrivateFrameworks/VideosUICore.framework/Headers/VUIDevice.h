// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDEVICE_H
#define VUIDEVICE_H


#import <Foundation/Foundation.h>


@interface VUIDevice : NSObject



+(BOOL)isMac;
+(BOOL)isPad;
+(BOOL)isPhone;
+(BOOL)isTV;
+(BOOL)supportsDeepColor;
+(NSInteger)userInterfaceIdiom;
+(id)guid;
+(id)model;
+(id)name;
+(id)systemName;
+(id)systemVersion;
+(void)enablePortraitLock:(BOOL)arg0 ;


@end


#endif