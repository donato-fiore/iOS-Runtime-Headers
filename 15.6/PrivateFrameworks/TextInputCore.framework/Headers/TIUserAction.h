// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIUSERACTION_H
#define TIUSERACTION_H

@class TIDocumentState, TIKeyboardState;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIUserAction : NSObject <NSSecureCoding>



@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (nonatomic) CGFloat occurenceTime; // ivar: _occurenceTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTIKeyboardState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif