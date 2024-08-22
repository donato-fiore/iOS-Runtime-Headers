// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREAUGMENTERMIXUP_H
#define PGFEATUREAUGMENTERMIXUP_H

@class NSString;
@protocol PGFeatureAugmenter;

#import <Foundation/Foundation.h>


@interface PGFeatureAugmenterMixUp : NSObject <PGFeatureAugmenter>



@property (readonly, nonatomic) float alpha; // ivar: _alpha
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_generateError:(*id)arg0 withCode:(NSInteger)arg1 andMessage:(id)arg2 ;
+(id)instanceWithParameters:(id)arg0 error:(*id)arg1 ;
+(id)mixupOfFloatVector:(id)arg0 withFloatVector:(id)arg1 lambda:(float)arg2 ;
+(id)name;
-(id)_randomIndicesWithUpperBound:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)floatVectorWithFloatVector:(id)arg0 error:(*id)arg1 ;
-(id)floatVectorsWithFloatVectors:(id)arg0 error:(*id)arg1 ;
-(id)initWithCount:(NSUInteger)arg0 alpha:(float)arg1 error:(*id)arg2 ;


@end


#endif