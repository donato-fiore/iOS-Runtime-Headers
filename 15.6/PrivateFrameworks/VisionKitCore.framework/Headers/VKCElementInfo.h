// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCELEMENTINFO_H
#define VKCELEMENTINFO_H

@class NSString;


#import "VKCBaseElement.h"

@interface VKCElementInfo : VKCBaseElement

@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)infoWithText:(id)arg0 parent:(id)arg1 ;
-(id)children;
-(id)stringValue;


@end


#endif