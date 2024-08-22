// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCGAMEPADEVENTKEYBOARDEVENTADAPTERCONFIG_H
#define _GCGAMEPADEVENTKEYBOARDEVENTADAPTERCONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding>

 {
    UsagePage_Usage_Pair _mappings;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)gamepadElementForUsagePage:(NSInteger)arg0 usage:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mapUsagePage:(NSInteger)arg0 usage:(NSInteger)arg1 toGamepadElement:(NSInteger)arg2 ;


@end


#endif