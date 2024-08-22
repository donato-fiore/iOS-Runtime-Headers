// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRREADPARAMS_H
#define MTRREADPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRReadParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricFiltered;
@property (nonatomic, getter=shouldFilterByFabric) BOOL filterByFabric; // ivar: _filterByFabric
@property (copy, nonatomic) NSNumber *minEventNumber; // ivar: _minEventNumber


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)toReadPrepareParams:(*void)arg0 ;


@end


#endif