// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIDESMUTABLEFLOATARRAY_H
#define HMIDESMUTABLEFLOATARRAY_H

@class HMFObject, NSMutableData, NSData, NSString;
@protocol HMFLogging, NSCopying;



@interface HMIDESMutableFloatArray : HMFObject <HMFLogging, NSCopying>

 {
    NSMutableData *_data;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *float floats;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *float mutableFloats;
@property (readonly) Class superclass;


+(id)logCategory;
-(float)l2Norm;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)floatArrayByAdding:(id)arg0 ;
-(id)floatArrayByScaling:(float)arg0 ;
-(id)floatArrayBySubtracting:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDataTensor:(id)arg0 ;
-(id)initWithFloats:(*float)arg0 count:(NSUInteger)arg1 ;
-(id)initWithValue:(float)arg0 count:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)add:(id)arg0 ;
-(void)appendArray:(id)arg0 ;
-(void)appendFloats:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)fillWithFloat:(float)arg0 ;
-(void)scale:(float)arg0 ;
-(void)subtract:(id)arg0 ;


@end


#endif