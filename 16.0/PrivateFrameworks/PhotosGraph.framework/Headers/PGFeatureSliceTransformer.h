// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATURESLICETRANSFORMER_H
#define PGFEATURESLICETRANSFORMER_H

@class NSString;
@protocol PGFeatureTransformer;

#import <Foundation/Foundation.h>


@interface PGFeatureSliceTransformer : NSObject <PGFeatureTransformer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fromIndex; // ivar: _fromIndex
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger toIndex; // ivar: _toIndex


+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)name;
-(id)applyTransformationToFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorWithFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initFromIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;


@end


#endif