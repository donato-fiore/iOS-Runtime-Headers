// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSTCONFIGURATION_H
#define ANSTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface ANSTConfiguration : NSObject

@property (nonatomic) NSInteger networkEngineType; // ivar: _networkEngineType
@property (nonatomic) unsigned int qualityOfService; // ivar: _qualityOfService


+(id)new;
-(id)_init;
-(id)init;


@end


#endif