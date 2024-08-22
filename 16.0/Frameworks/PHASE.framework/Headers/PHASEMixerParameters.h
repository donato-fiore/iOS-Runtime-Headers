// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEMIXERPARAMETERS_H
#define PHASEMIXERPARAMETERS_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PHASEMixerParameters : NSObject {
    NSMutableDictionary *_parameters;
}


@property (readonly, nonatomic) NSDictionary *parameterDictionary;


-(id)init;
-(void)addAmbientMixerParameters:(id)arg0 listener:(id)arg1 ;
-(void)addAmbientMixerParametersWithIdentifier:(id)arg0 listener:(id)arg1 ;
-(void)addSpatialMixerParameters:(id)arg0 source:(id)arg1 listener:(id)arg2 ;
-(void)addSpatialMixerParametersWithIdentifier:(id)arg0 source:(id)arg1 listener:(id)arg2 ;


@end


#endif