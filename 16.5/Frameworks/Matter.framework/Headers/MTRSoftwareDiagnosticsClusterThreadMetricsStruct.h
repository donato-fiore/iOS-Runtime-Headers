// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICSSTRUCT_H
#define MTRSOFTWAREDIAGNOSTICSCLUSTERTHREADMETRICSSTRUCT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRSoftwareDiagnosticsClusterThreadMetricsStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *id; // ivar: _id
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *stackFreeCurrent; // ivar: _stackFreeCurrent
@property (copy, nonatomic) NSNumber *stackFreeMinimum; // ivar: _stackFreeMinimum
@property (copy, nonatomic) NSNumber *stackSize; // ivar: _stackSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif