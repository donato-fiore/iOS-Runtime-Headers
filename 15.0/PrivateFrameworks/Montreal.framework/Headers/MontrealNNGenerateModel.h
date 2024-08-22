// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MONTREALNNGENERATEMODEL_H
#define MONTREALNNGENERATEMODEL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MontrealNNModelNetwork.h"

@interface MontrealNNGenerateModel : NSObject

@property (readonly) NSMutableDictionary *inputs; // ivar: _inputs
@property (readonly) MontrealNNModelNetwork *network; // ivar: _network
@property *MontrealNeuralNetwork nnObject; // ivar: _nnObject
@property (readonly) NSMutableDictionary *outputs; // ivar: _outputs
@property (readonly) NSUInteger weightFormat; // ivar: _weightFormat


-(*void)generateModelContainer;
-(id)initWithWeightFormat:(NSUInteger)arg0 ;
-(id)modelContainerPath;
-(void)addInputs:(id)arg0 ;
-(void)addOutputs:(id)arg0 ;
-(void)dealloc;
-(void)merge:(id)arg0 ;
-(void)removeInput:(id)arg0 ;
-(void)removeOutput:(id)arg0 ;


@end


#endif