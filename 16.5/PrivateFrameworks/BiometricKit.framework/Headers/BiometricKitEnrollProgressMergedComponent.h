// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITENROLLPROGRESSMERGEDCOMPONENT_H
#define BIOMETRICKITENROLLPROGRESSMERGEDCOMPONENT_H


#import <Foundation/Foundation.h>

#import "BiometricKitEnrollProgressCoordinates.h"

@interface BiometricKitEnrollProgressMergedComponent : NSObject

@property (nonatomic) NSInteger componentID; // ivar: _componentID
@property (retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates; // ivar: _transformationCoordinates


-(id)init;
-(void)dealloc;


@end


#endif