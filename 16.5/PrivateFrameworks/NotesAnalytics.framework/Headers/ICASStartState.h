// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTARTSTATE_H
#define ICASSTARTSTATE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASStartState : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger startState; // ivar: _startState


-(id)initWithStartState:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif