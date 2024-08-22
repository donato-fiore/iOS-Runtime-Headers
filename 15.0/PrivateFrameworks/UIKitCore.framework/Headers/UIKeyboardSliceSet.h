// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDSLICESET_H
#define UIKEYBOARDSLICESET_H

@class NSMutableDictionary, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface UIKeyboardSliceSet : NSObject

@property (retain) NSMutableDictionary *controlKeys; // ivar: _controlKeys
@property CGRect endRect; // ivar: _endRect
@property CGFloat leftWidth; // ivar: _leftWidth
@property CGFloat mergePoint; // ivar: _mergePoint
@property CGFloat rightWidth; // ivar: _rightWidth
@property (retain) NSString *sliceSetID; // ivar: _ssid
@property (readonly) NSMutableSet *slices; // ivar: _slices
@property CGRect startRect; // ivar: _startRect


+(id)sliceSetWithDictionaryRepresenation:(id)arg0 ;
-(id)description;
-(id)initWithSliceID:(id)arg0 ;
-(void)addSlice:(id)arg0 ;
-(void)dealloc;


@end


#endif