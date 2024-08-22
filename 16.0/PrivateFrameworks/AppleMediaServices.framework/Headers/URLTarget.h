// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef URLTARGET_H
#define URLTARGET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface URLTarget : NSObject

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSInteger defaultIndex; // ivar: _defaultIndex
@property (retain, nonatomic) NSString *normalScheme; // ivar: _normalScheme
@property (retain, nonatomic) NSString *secureScheme; // ivar: _secureScheme


+(id)targetWithBundle:(id)arg0 scheme:(id)arg1 secureScheme:(id)arg2 ;
-(id)initWithBundle:(id)arg0 scheme:(id)arg1 secureScheme:(id)arg2 ;


@end


#endif