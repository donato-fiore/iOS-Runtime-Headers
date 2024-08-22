// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARBUTTONINFO_H
#define CARBUTTONINFO_H


#import <Foundation/Foundation.h>


@interface CARButtonInfo : NSObject

@property (readonly, nonatomic) NSUInteger buttonLocation; // ivar: _buttonLocation
@property (readonly, nonatomic) NSUInteger buttonPressDuration; // ivar: _buttonPressDuration
@property (readonly, nonatomic) NSUInteger buttonType; // ivar: _buttonType


-(id)initWithButtonType:(NSUInteger)arg0 buttonLocation:(NSUInteger)arg1 buttonPressDuration:(NSUInteger)arg2 ;


@end


#endif