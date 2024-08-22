// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBLEAFICON_H
#define DBLEAFICON_H

@class SBLeafIcon, FBSApplicationPlaceholder;


#import "DBApplicationInfo.h"

@interface DBLeafIcon : SBLeafIcon

@property (readonly, nonatomic) DBApplicationInfo *applicationInfo; // ivar: _applicationInfo
@property (retain, nonatomic) FBSApplicationPlaceholder *placeholder; // ivar: _placeholder


+(Class)dataSourceClass;
-(BOOL)isLaunchEnabled;
-(id)initWithApplicationInfo:(id)arg0 ;


@end


#endif