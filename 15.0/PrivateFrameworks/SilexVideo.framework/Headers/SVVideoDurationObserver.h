// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SVVIDEODURATIONOBSERVER_H
#define SVVIDEODURATIONOBSERVER_H

@class NSString;
@protocol SVVideoDurationObserving, SVPlayerItemObserving;

#import <Foundation/Foundation.h>

#import "SVKeyValueObserver.h"

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>



@property (copy, nonatomic, setter=onChange:) id *changeBlock; // ivar: changeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver; // ivar: _playerItemDurationObserver
@property (readonly, nonatomic) NSObject<SVPlayerItemObserving> *playerItemObserver; // ivar: _playerItemObserver
@property (readonly) Class superclass;


-(id)initWithPlayerItemObserver:(id)arg0 ;
-(void)onChange:(id)arg0 ;
-(void)updateDuration:(struct ? )arg0 ;


@end


#endif