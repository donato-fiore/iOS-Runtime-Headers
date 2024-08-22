// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETMODELDEF_H
#define ETMODELDEF_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ETModelDef : NSObject {
    map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> layer_variable_names;
}


@property (retain) NSMutableArray *all_variables; // ivar: _all_variables
@property shared_ptr<Espresso::gradient_builder> gb; // ivar: _gb
@property shared_ptr<Espresso::net> network; // ivar: _network


-(*void)layerForName:(id)arg0 ;
-(?)biasesForLayer;
-(?)transformForTraining;
-(?)weightsForLayer;
-(id)initWithNetwork:(id)arg0 ;
-(id)layerNames;
-(id)variableForLayer:(id)arg0 kind:(NSUInteger)arg1 ;
-(id)variableNameForLayer:(id)arg0 kind:(NSUInteger)arg1 ;
-(id)variables;
-(int)configureLayersToTrain:(id)arg0 reinitializeVariables:(BOOL)arg1 ;
-(struct shared_ptr<std::string> )topNamesForLayerIndex:(int)arg0 ;
-(void)randomizeWeightsForLayer:(id)arg0 withSeed:(float)arg1 ;
-(void)setupVariablesDef;
-(void)updateLayer:(id)arg0 withBiases:(struct shared_ptr<float> )arg1 length:(NSUInteger)arg2 ;
-(void)updateLayer:(id)arg0 withWeights:(struct shared_ptr<float> )arg1 length:(NSUInteger)arg2 ;


@end


#endif