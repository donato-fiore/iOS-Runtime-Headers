// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNACTIONJAVASCRIPT_H
#define SCNACTIONJAVASCRIPT_H

@class NSString;


#import "SCNAction.h"

@interface SCNActionJavaScript : SCNAction {
    NSString *_script;
}




+(BOOL)supportsSecureCoding;
+(id)javaScriptActionWithDuration:(CGFloat)arg0 script:(id)arg1 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif