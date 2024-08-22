// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMINDNETCONFIGURATION_H
#define AXMINDNETCONFIGURATION_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface AXMindNetConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filterThresholds; // ivar: _filterThresholds
@property (readonly, nonatomic) NSNumber *nmsThreshold; // ivar: _nmsThreshold


-(id)description;
-(id)initWithURL:(id)arg0 ;


@end


#endif