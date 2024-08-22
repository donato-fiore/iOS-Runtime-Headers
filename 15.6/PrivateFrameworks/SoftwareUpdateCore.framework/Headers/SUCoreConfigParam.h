// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONFIGPARAM_H
#define SUCORECONFIGPARAM_H

@class NSError, MAAsset;

#import <Foundation/Foundation.h>


@interface SUCoreConfigParam : NSObject

@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, retain, nonatomic) MAAsset *locatedAsset; // ivar: _locatedAsset
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation


-(id)description;
-(id)initWithError:(id)arg0 operation:(NSUInteger)arg1 ;
-(id)initWithLocatedAsset:(id)arg0 ;


@end


#endif