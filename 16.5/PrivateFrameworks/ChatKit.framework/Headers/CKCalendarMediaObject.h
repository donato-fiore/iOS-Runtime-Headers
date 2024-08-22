// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCALENDARMEDIAOBJECT_H
#define CKCALENDARMEDIAOBJECT_H



#import "CKCardMediaObject.h"

@interface CKCalendarMediaObject : CKCardMediaObject



+(id)UTITypes;
+(id)fallbackFilenamePrefix;
-(BOOL)shouldBeQuickLooked;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)subtitle;
-(int)mediaType;


@end


#endif