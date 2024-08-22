// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVABACKGROUNDREQUESTIMPLSDOF_H
#define CVABACKGROUNDREQUESTIMPLSDOF_H

@class NSString, NSDictionary;
@protocol CVABackgroundRequest;


#import "CVABackgroundRequestImplBase.h"

@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase <CVABackgroundRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *sbufMetadata; // ivar: _sbufMetadata
@property float simulatedFocalRatio; // ivar: _simulatedFocalRatio
@property float sourceColorGain; // ivar: _sourceColorGain
@property float sourceColorLux; // ivar: _sourceColorLux
@property (readonly) Class superclass;




@end


#endif