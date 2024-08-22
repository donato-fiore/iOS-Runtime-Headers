// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMUTABLEDATASET_H
#define NUMUTABLEDATASET_H



#import "NUDataSet.h"

@interface NUMutableDataSet : NUDataSet

@property (readonly, nonatomic) NSInteger capacity;


-(*void)_data;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCapacity:(NSInteger)arg0 ;
-(void)addValue:(CGFloat)arg0 ;
-(void)appendDataSet:(id)arg0 ;


@end


#endif