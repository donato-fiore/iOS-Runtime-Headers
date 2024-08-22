// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIMODEL_H
#define SIMODEL_H

@class NSDictionary;
@protocol SINetworkProtocol;

#import <Foundation/Foundation.h>

#import "SINetworkConfiguration.h"

@interface SIModel : NSObject

@property (retain, nonatomic) SINetworkConfiguration *config; // ivar: _config
@property (nonatomic) NSUInteger inferenceSignpostEventEnd; // ivar: _inferenceSignpostEventEnd
@property (nonatomic) NSUInteger inferenceSignpostEventStart; // ivar: _inferenceSignpostEventStart
@property (retain) NSDictionary *inputs; // ivar: _inputs
@property (retain, nonatomic) NSObject<SINetworkProtocol> *network; // ivar: _network
@property (retain) NSDictionary *outputs; // ivar: _outputs


-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)evaluateWithInput:(id)arg0 outputs:(id)arg1 ;
-(id)getConfiguration;
-(id)getOpsForLibrary;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;


@end


#endif