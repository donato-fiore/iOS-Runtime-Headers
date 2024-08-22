// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFOUNDTEXTRANGE_H
#define WKFOUNDTEXTRANGE_H

@class UITextRange, NSString;



@interface WKFoundTextRange : UITextRange

@property (copy, nonatomic) NSString *frameIdentifier; // ivar: _frameIdentifier
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger location; // ivar: _location
@property (nonatomic) NSUInteger order; // ivar: _order


+(id)foundTextRangeWithWebFoundTextRange:(struct WebFoundTextRange )arg0 ;
-(BOOL)isEmpty;
-(id)end;
-(id)start;
-(struct WebFoundTextRange )webFoundTextRange;


@end


#endif