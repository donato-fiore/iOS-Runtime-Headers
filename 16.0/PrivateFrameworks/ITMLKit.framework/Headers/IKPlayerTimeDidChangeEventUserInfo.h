// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKPLAYERTIMEDIDCHANGEEVENTUSERINFO_H
#define IKPLAYERTIMEDIDCHANGEEVENTUSERINFO_H

@class NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerTimeDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;


-(id)initWithInterval:(CGFloat)arg0 elapsedTime:(CGFloat)arg1 ;


@end


#endif