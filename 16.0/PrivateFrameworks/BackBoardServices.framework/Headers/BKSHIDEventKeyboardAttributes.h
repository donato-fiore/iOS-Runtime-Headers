// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTKEYBOARDATTRIBUTES_H
#define BKSHIDEVENTKEYBOARDATTRIBUTES_H



#import "BKSHIDEventBaseAttributes.h"

@interface BKSHIDEventKeyboardAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) unsigned int GSModifierState; // ivar: _GSModifierState


+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif