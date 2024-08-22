// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTTEXTPLACEHOLDER_H
#define PKTEXTINPUTTEXTPLACEHOLDER_H

@class UITextPlaceholder, NSArray;



@interface PKTextInputTextPlaceholder : UITextPlaceholder

@property (retain, nonatomic) NSArray *_rects; // ivar: __rects
@property (retain, nonatomic) id *placeholder; // ivar: _placeholder
@property (nonatomic) BOOL shouldIgnoreOrigin; // ivar: _shouldIgnoreOrigin


+(id)placeholderWithText:(id)arg0 rects:(id)arg1 ;
+(id)placeholderWithTextPlaceholder:(id)arg0 ;
+(id)placeholderWithToken:(id)arg0 frame:(struct CGRect )arg1 ;
+(id)placeholderWithWebTextPlaceholder:(id)arg0 ;
-(id)rects;


@end


#endif