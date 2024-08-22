// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICTABLETEXTSTORAGE_H
#define ICTABLETEXTSTORAGE_H



#import "TTTextStorage.h"

@interface ICTableTextStorage : TTTextStorage



-(id)initWithDocument:(id)arg0 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)textStorage:(id)arg0 didProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;


@end


#endif