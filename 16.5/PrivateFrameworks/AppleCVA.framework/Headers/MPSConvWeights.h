// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCONVWEIGHTS_H
#define MPSCONVWEIGHTS_H

@class NSString, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface MPSConvWeights : NSObject <MPSCNNConvolutionDataSource>



@property (nonatomic) *float biasTerms; // ivar: _biasTerms
@property unsigned int dataType; // ivar: _dataType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPSCNNConvolutionDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (nonatomic) *void weights; // ivar: _weights


-(BOOL)load;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(void)purge;


@end


#endif