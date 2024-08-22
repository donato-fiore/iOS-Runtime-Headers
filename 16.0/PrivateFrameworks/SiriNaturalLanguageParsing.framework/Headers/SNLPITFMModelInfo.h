// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNLPITFMMODELINFO_H
#define SNLPITFMMODELINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNLPITFMModelInfo : NSObject

@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) int loggingComponent; // ivar: _loggingComponent
@property (readonly, nonatomic) NSString *loggingComponentString; // ivar: _loggingComponentString
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)stringForModelType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 loggingComponent:(int)arg1 errorDomain:(id)arg2 ;


@end


#endif