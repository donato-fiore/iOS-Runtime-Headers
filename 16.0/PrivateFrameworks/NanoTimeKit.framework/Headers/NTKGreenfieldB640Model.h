// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDB640MODEL_H
#define NTKGREENFIELDB640MODEL_H

@class NSBundle, NSString, NSError, NSArray;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldB640Model : NSObject

@property (retain, nonatomic) NSBundle *bandImageBundle; // ivar: _bandImageBundle
@property (retain, nonatomic) NSString *bandImagePath; // ivar: _bandImagePath
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSArray *watchFaceModels; // ivar: _watchFaceModels


-(id)initWithWatchFaceModels:(id)arg0 error:(id)arg1 bandImagePath:(id)arg2 bandImageBundle:(id)arg3 ;


@end


#endif