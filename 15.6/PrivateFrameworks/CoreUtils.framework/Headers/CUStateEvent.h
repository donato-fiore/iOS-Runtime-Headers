// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUSTATEEVENT_H
#define CUSTATEEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)enterState;
+(id)exitState;
+(id)initialTransition;
-(id)description;
-(id)initWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)dealloc;


@end


#endif