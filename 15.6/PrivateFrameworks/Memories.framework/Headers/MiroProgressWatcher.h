// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROPROGRESSWATCHER_H
#define MIROPROGRESSWATCHER_H


#import <Foundation/Foundation.h>


@interface MiroProgressWatcher : NSObject

@property (retain, nonatomic) id *observedObject; // ivar: _observedObject
@property (nonatomic) float progress; // ivar: _progress
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)initWithObservedObject:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif