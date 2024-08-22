// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICS_H
#define MTRSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRSoftwareDiagnosticsClusterThreadMetrics : NSObject

@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *stackFreeCurrent; // ivar: _stackFreeCurrent
@property (retain, nonatomic) NSNumber *stackFreeMinimum; // ivar: _stackFreeMinimum
@property (retain, nonatomic) NSNumber *stackSize; // ivar: _stackSize


-(id)description;
-(id)init;


@end


#endif