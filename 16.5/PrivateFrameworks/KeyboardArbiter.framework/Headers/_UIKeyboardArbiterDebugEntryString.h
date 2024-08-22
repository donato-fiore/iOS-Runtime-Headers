// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDARBITERDEBUGENTRYSTRING_H
#define _UIKEYBOARDARBITERDEBUGENTRYSTRING_H

@class UIKeyboardArbiterDebugEntry, NSString;



@interface _UIKeyboardArbiterDebugEntryString : UIKeyboardArbiterDebugEntry {
    NSString *_message;
    NSString *_type;
}




+(id)entryWithMessage:(id)arg0 type:(id)arg1 ;
-(int)importance;
-(void)enumerateContents:(id)arg0 ;


@end


#endif