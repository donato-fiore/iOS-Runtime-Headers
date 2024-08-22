// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUPLAYERSTATUS_H
#define SUPLAYERSTATUS_H

@class NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUPlayerStatus : NSObject <NSCopying>



@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger playerState; // ivar: _state


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif