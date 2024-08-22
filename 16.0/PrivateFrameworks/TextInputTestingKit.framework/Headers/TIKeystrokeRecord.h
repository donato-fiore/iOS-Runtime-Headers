// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYSTROKERECORD_H
#define TIKEYSTROKERECORD_H

@class NSString, NSArray, TIKeyboardTouchEvent;

#import <Foundation/Foundation.h>

#import "TIPointError.h"

@interface TIKeystrokeRecord : NSObject

@property (copy, nonatomic) NSString *documentState; // ivar: _documentState
@property (copy, nonatomic) NSString *insertedKey; // ivar: _insertedKey
@property (copy, nonatomic) NSString *intendedKey; // ivar: _intendedKey
@property (retain, nonatomic) NSArray *predictionBarState; // ivar: _predictionBarState
@property (retain, nonatomic) TIKeyboardTouchEvent *touch; // ivar: _touch
@property (retain, nonatomic) TIPointError *touchError; // ivar: _touchError
@property (copy, nonatomic) NSString *touchedKey; // ivar: _touchedKey


+(id)keystrokeRecord;
-(id)init;


@end


#endif