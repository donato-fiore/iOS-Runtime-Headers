// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMUTABLEDISPLAYPREFERENCES_H
#define CAMUTABLEDISPLAYPREFERENCES_H

@class NSString;


#import "CADisplayPreferences.h"

@interface CAMutableDisplayPreferences : CADisplayPreferences

@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif