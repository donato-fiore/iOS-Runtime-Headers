// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMGYRODATAARRAY_H
#define CMGYRODATAARRAY_H

@class NSArray, NSString;
@protocol SRSampling;



@interface CMGyroDataArray : NSArray <SRSampling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif