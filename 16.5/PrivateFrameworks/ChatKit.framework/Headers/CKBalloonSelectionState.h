// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBALLOONSELECTIONSTATE_H
#define CKBALLOONSELECTIONSTATE_H


#import <Foundation/Foundation.h>


@interface CKBalloonSelectionState : NSObject

@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) _NSRange textSelectionRange; // ivar: _textSelectionRange


+(id)balloonSelectionState:(NSInteger)arg0 ;
+(id)balloonSelectionState:(NSInteger)arg0 textSelectionRange:(struct _NSRange )arg1 ;
-(id)description;
-(id)initWithStyle:(NSInteger)arg0 textSelectionRange:(struct _NSRange )arg1 ;


@end


#endif