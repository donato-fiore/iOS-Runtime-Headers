// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPENCILPREFERENCES_H
#define _UIPENCILPREFERENCES_H


#import <Foundation/Foundation.h>


@interface _UIPencilPreferences : NSObject {
    NSInteger _cachedPreferredTapAction;
    BOOL _cachedPrefersPencilOnlyDrawing;
    BOOL _cachedHasSeenPencilPairingUI;
}




+(BOOL)hasSeenPencilPairingUI;
+(BOOL)prefersPencilOnlyDrawing;
+(NSInteger)preferredTapAction;
+(id)sharedPreferences;
+(void)setPrefersPencilOnlyDrawing:(BOOL)arg0 ;
-(BOOL)_hasSeenPencilPairingUI;
-(BOOL)_prefersPencilOnlyDrawing;
-(NSInteger)_preferredTapAction;
-(id)init;
-(void)_hasSeenPencilPairingUIDidChange;
-(void)_preferredTapActionDidChange;
-(void)_prefersPencilOnlyDrawingDidChange;
-(void)_setPrefersPencilOnlyDrawing:(BOOL)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif