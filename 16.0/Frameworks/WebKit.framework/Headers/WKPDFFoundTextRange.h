// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKPDFFOUNDTEXTRANGE_H
#define WKPDFFOUNDTEXTRANGE_H

@class UITextRange;



@interface WKPDFFoundTextRange : UITextRange

@property (nonatomic) NSUInteger index; // ivar: _index


+(id)foundTextRangeWithIndex:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(id)end;
-(id)start;


@end


#endif