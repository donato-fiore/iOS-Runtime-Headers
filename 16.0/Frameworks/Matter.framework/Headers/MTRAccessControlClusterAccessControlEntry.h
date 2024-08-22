// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRY_H
#define MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRY_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRAccessControlClusterAccessControlEntry : NSObject

@property (retain, nonatomic) NSNumber *authMode; // ivar: _authMode
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSArray *subjects; // ivar: _subjects
@property (retain, nonatomic) NSArray *targets; // ivar: _targets


-(id)description;
-(id)init;


@end


#endif