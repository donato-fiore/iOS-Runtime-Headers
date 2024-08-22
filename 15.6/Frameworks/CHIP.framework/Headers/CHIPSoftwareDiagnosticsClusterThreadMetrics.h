// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICS_H
#define CHIPSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPSoftwareDiagnosticsClusterThreadMetrics : NSObject

@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *stackFreeCurrent; // ivar: _stackFreeCurrent
@property (retain, nonatomic) NSNumber *stackFreeMinimum; // ivar: _stackFreeMinimum
@property (retain, nonatomic) NSNumber *stackSize; // ivar: _stackSize


-(id)init;


@end


#endif