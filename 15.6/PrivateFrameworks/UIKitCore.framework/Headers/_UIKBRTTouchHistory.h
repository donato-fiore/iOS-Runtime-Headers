// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKBRTTOUCHHISTORY_H
#define _UIKBRTTOUCHHISTORY_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIKBRTTouchHistory : NSObject <NSCopying>

 {
    NSMutableArray *_history;
    CGPoint _historyOffset;
    CGFloat _lastDecayTime;
}


@property (readonly, nonatomic) BOOL hasHistory;
@property (readonly, nonatomic) CGPoint historyOffset;
@property (nonatomic) BOOL isLeftHand; // ivar: _isLeftHand
@property (readonly, nonatomic) CGFloat lastTime;


-(BOOL)containsInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIsLeftHand:(BOOL)arg0 ;
-(void)_decayHistoryToSize:(NSUInteger)arg0 ;
-(void)_sortHistory;
-(void)_updateOffset;
-(void)addInfo:(id)arg0 ;
-(void)adjustHistoryOffset:(struct CGPoint )arg0 ;
-(void)clearHistory;
-(void)dealloc;
-(void)decayHistory;
-(void)removeInfo:(id)arg0 ;
-(void)reset;


@end


#endif