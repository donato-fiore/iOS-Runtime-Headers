// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSINCLUSIVITYINFO_H
#define TPSINCLUSIVITYINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TPSInclusivityInfo : NSObject

@property (copy, nonatomic) NSArray *excludeValues; // ivar: _excludeValues
@property (copy, nonatomic) NSArray *targetValues; // ivar: _targetValues


-(id)debugDescription;
-(id)initWithTargetValues:(id)arg0 excludeValues:(id)arg1 ;


@end


#endif