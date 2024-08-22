// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUINOWPLAYINGTIMEBOUNDFEATURE_H
#define VUINOWPLAYINGTIMEBOUNDFEATURE_H

@class NSString;
@protocol VUINowPlayingTimeBoundFeature;

#import <Foundation/Foundation.h>


@interface VUINowPlayingTimeBoundFeature : NSObject <VUINowPlayingTimeBoundFeature>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // ivar: _autoRemove
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSkippable) BOOL skippable; // ivar: _skippable
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;


@end


#endif