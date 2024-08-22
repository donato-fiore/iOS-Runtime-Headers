// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSCONTROLCLUSTERACCESSCONTROLENTRY_H
#define CHIPACCESSCONTROLCLUSTERACCESSCONTROLENTRY_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPAccessControlClusterAccessControlEntry : NSObject

@property (retain, nonatomic) NSNumber *authMode; // ivar: _authMode
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSArray *subjects; // ivar: _subjects
@property (retain, nonatomic) NSArray *targets; // ivar: _targets


-(id)init;


@end


#endif