// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPATTERNSETTING_H
#define DEPATTERNSETTING_H

@class NSString;


#import "DEParameter.h"

@interface DEPatternSetting : DEParameter

@property shared_ptr<siri::dialogengine::PatternSetting> This; // ivar: _This
@property (readonly) NSString *defaultValueFromSetting;


-(*void)getSharedPtr;
-(id)init;
-(id)initWithSharedPtr:(*void)arg0 ;


@end


#endif