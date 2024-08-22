// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKPLAYERSTATECHANGEEVENTUSERINFO_H
#define IKPLAYERSTATECHANGEEVENTUSERINFO_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol IKPlayerEventMarshaling;

#import <Foundation/Foundation.h>


@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>

 {
    NSMutableDictionary *_mutableProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat elapsedTime;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger oldState; // ivar: _oldState
@property (readonly, nonatomic) NSDictionary *properties;
@property (nonatomic) CGFloat rate;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(NSInteger)stateForStateName:(id)arg0 ;
+(id)stateNameForState:(NSInteger)arg0 ;
-(id)initWithState:(NSInteger)arg0 ;
-(id)initWithState:(NSInteger)arg0 oldState:(NSInteger)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif