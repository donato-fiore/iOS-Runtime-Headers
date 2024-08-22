// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKTEXTPOSITION_H
#define WKTEXTPOSITION_H

@class UITextPosition;



@interface WKTextPosition : UITextPosition

@property (nonatomic) CGRect positionRect; // ivar: _positionRect


+(id)textPositionWithRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif