// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVCDUCKOVERRIDE_H
#define AVVCDUCKOVERRIDE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface AVVCDuckOverride : NSObject

@property (retain, nonatomic) NSNumber *duckOthers; // ivar: _duckOthers
@property (retain, nonatomic) NSNumber *duckToLevel; // ivar: _duckToLevel
@property (nonatomic) BOOL isBlur; // ivar: _isBlur
@property (retain, nonatomic) NSNumber *mixWithOthers; // ivar: _mixWithOthers


-(id)description;
-(id)initWithDuckOthers:(id)arg0 duckToLevel:(id)arg1 mixWithOthers:(id)arg2 ;


@end


#endif