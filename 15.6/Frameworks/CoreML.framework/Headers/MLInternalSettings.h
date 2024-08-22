// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLINTERNALSETTINGS_H
#define MLINTERNALSETTINGS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLInternalSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isNeuralNetworkGPUPathForbidden; // ivar: _isNeuralNetworkGPUPathForbidden
@property BOOL restrictNeuralNetworksFromUsingANE; // ivar: _restrictNeuralNetworksFromUsingANE
@property BOOL restrictNeuralNetworksToUseCPUOnly; // ivar: _restrictNeuralNetworksToUseCPUOnly


+(BOOL)deviceHasANE;
+(BOOL)supportsSecureCoding;
+(id)globalSettings;
+(id)globalSettingsFromSettings:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif