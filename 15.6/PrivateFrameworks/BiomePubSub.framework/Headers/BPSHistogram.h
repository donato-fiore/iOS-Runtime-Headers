// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSHISTOGRAM_H
#define BPSHISTOGRAM_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BPSHistogram : NSObject {
    NSMutableDictionary *_backingDictionary;
    NSArray *_keyType;
}




-(BOOL)_correctKeyType:(id)arg0 ;
-(id)allKeysAtLevel:(NSUInteger)arg0 ;
-(id)init;
-(id)scoreForKey:(id)arg0 ;
// -(void)_enumerateWithBlock:(id)arg0 node:(unk)arg1 currentKey:(id)arg2 stop:(id)arg3  ;
-(void)_setKeyTypeFromKey:(id)arg0 ;
-(void)addScore:(id)arg0 forKey:(id)arg1 ;
-(void)enumerateKeysAndScoresUsingBlock:(id)arg0 ;
-(void)removeAllScores;
-(void)removeScoreForKey:(id)arg0 ;


@end


#endif