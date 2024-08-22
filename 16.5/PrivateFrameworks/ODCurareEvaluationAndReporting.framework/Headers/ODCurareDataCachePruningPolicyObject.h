// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURAREDATACACHEPRUNINGPOLICYOBJECT_H
#define ODCURAREDATACACHEPRUNINGPOLICYOBJECT_H


#import <Foundation/Foundation.h>


@interface ODCurareDataCachePruningPolicyObject : NSObject

@property (nonatomic) NSInteger maximumNumberOfDays; // ivar: _maximumNumberOfDays
@property (nonatomic) NSInteger maximumNumberOfEvents; // ivar: _maximumNumberOfEvents


-(id)initWithMaximumNumberOfDays:(int)arg0 maximumNumberOfEvents:(int)arg1 ;


@end


#endif