// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDB640MODEL_H
#define NTKGREENFIELDB640MODEL_H

@class NSBundle, NSString, NSArray, NSError;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldB640Model : NSObject

@property (retain, nonatomic) NSBundle *bandImageBundle; // ivar: _bandImageBundle
@property (retain, nonatomic) NSString *bandImagePath; // ivar: _bandImagePath
@property (retain, nonatomic) NSArray *decodedRecipes; // ivar: _decodedRecipes
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)initWithDecodedRecipes:(id)arg0 error:(id)arg1 bandImagePath:(id)arg2 bandImageBundle:(id)arg3 ;


@end


#endif