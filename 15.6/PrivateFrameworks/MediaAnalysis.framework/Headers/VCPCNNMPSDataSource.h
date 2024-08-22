// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNMPSDATASOURCE_H
#define VCPCNNMPSDATASOURCE_H

@class MPSCNNConvolutionDescriptor, NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource>

 {
    unsigned int _dataType;
    MPSCNNConvolutionDescriptor *_descriptor;
    *void _kernelWeights;
    *float _biasTerms;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)descriptor;
-(id)initWith:(unsigned int)arg0 convolutionDescriptor:(id)arg1 kernelWeights:(*void)arg2 biasTerm:(*float)arg3 ;
-(id)label;
-(unsigned int)dataType;
-(void)purge;


@end


#endif