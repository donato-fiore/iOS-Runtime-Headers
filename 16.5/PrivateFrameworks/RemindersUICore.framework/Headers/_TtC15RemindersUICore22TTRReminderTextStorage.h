// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REMINDERSUICORE22TTRREMINDERTEXTSTORAGE_H
#define _TTC15REMINDERSUICORE22TTRREMINDERTEXTSTORAGE_H



#import "TTRReminderBaseTextStorage.h"

@interface _TtC15RemindersUICore22TTRReminderTextStorage : TTRReminderBaseTextStorage {
    ? baseTextStyles;
    ? uncommittedHashtagTextStyles;
    ? committedHashtagTextStyles;
    ? foreignHashtagTextStyles;
    ? harvestedResultTextStyles;
    ? hashtagVisibility;
    ? debug_nonEditableTextStyles;
    ? debug_highlightNonEditableTexts;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)processEditing;


@end


#endif