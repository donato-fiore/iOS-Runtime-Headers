// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VNINFERENCENETWORKDESCRIPTORINFO_H
#define _VNINFERENCENETWORKDESCRIPTORINFO_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface _VNInferenceNetworkDescriptorInfo : NSObject {
    NSArray *_detectorDescriptorIdentifierVersionTuples;
    NSDictionary *_descriptorIdentifierToVersionsArray;
}




+(id)sharedInstance;
-(Class)detectorClassForDescriptorIdentifier:(id)arg0 version:(id)arg1 ;
-(id)availableVersionsForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithDetectorDescriptorIdentifierVersionTuples:(id)arg0 descriptorIdentifierToVersionsArray:(id)arg1 ;


@end


#endif