// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASENDSTATE_H
#define ICASENDSTATE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASEndState : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger endState; // ivar: _endState


-(id)initWithEndState:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif