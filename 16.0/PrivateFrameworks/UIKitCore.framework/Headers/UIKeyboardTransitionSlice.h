// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDTRANSITIONSLICE_H
#define UIKEYBOARDTRANSITIONSLICE_H


#import <Foundation/Foundation.h>

#import "UIKBCacheToken.h"

@interface UIKeyboardTransitionSlice : NSObject {
    BOOL _shiftContents;
}


@property BOOL delayCrossfade; // ivar: _delayCrossfade
@property CGRect endRect; // ivar: _endRect
@property (retain) UIKBCacheToken *endToken; // ivar: _endToken
@property (readonly) BOOL hasGeometry;
@property int normalization; // ivar: _normalization
@property CGRect startRect; // ivar: _startRect
@property (retain) UIKBCacheToken *startToken; // ivar: _startToken


+(id)sliceWithStart:(struct CGRect )arg0 end:(struct CGRect )arg1 ;
-(id)description;
-(id)init;
-(void)addStartRect:(struct CGRect )arg0 end:(struct CGRect )arg1 ;


@end


#endif