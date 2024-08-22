// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOMPOSITIONEXPORTEROPTIONS_H
#define PICOMPOSITIONEXPORTEROPTIONS_H

@class NUColorSpace, NSString, NUPriority;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface PICompositionExporterOptions : NSObject

@property (retain) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (copy) NSString *pairingIdentifier; // ivar: _pairingIdentifier
@property (retain) NUPriority *priority; // ivar: _priority
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(id)description;
-(id)init;


@end


#endif