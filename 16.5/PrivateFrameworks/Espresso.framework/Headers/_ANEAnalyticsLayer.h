// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEANALYTICSLAYER_H
#define _ANEANALYTICSLAYER_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface _ANEAnalyticsLayer : NSObject

@property (readonly, nonatomic) NSString *layerName; // ivar: _layerName
@property (readonly, nonatomic) NSNumber *weight; // ivar: _weight


+(id)objectWithName:(id)arg0 weight:(id)arg1 ;
-(id)initWithName:(id)arg0 weight:(id)arg1 ;
-(id)serialize;


@end


#endif