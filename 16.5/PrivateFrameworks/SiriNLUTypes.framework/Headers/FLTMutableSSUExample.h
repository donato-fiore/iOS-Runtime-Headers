// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTMUTABLESSUEXAMPLE_H
#define FLTMUTABLESSUEXAMPLE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FLTSSUExample.h"
#import "FLTSSUExampleEncodedVector.h"
#import "FLTSSUExampleUtterance.h"

@interface FLTMutableSSUExample : FLTSSUExample

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *data;
@property (copy, nonatomic) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (copy, nonatomic) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (nonatomic) NSInteger data_type;


+(Class)data_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)data_typeForMutableObject:(id)arg0 ;
+(NSInteger)data_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif