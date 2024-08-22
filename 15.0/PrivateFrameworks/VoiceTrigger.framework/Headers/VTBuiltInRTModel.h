// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTBUILTINRTMODEL_H
#define VTBUILTINRTMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VTBuiltInRTModel : NSObject

@property (retain, nonatomic) NSDictionary *builtInRTModelDictionary; // ivar: _builtInRTModelDictionary


+(id)sharedInstance;
-(void)dealloc;


@end


#endif