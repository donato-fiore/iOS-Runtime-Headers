// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRREMINDERBASETEXTSTORAGE_H
#define TTRREMINDERBASETEXTSTORAGE_H

@class NSTextStorage, REMCRMutableAttributedString, NSString;
@protocol REMCRMutableAttributedStringEditObserver;



@interface TTRReminderBaseTextStorage : NSTextStorage <REMCRMutableAttributedStringEditObserver>



@property (retain, nonatomic) REMCRMutableAttributedString *backingStore; // ivar: _backingStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)string;
-(void)mutableAttributedString:(id)arg0 didEdit:(NSInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif