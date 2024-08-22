// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFOUNDTEXTPOSITION_H
#define WKFOUNDTEXTPOSITION_H

@class UITextPosition;



@interface WKFoundTextPosition : UITextPosition

@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) NSUInteger order; // ivar: _order


+(id)textPositionWithOffset:(NSUInteger)arg0 order:(NSUInteger)arg1 ;


@end


#endif