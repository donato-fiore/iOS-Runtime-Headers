// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIMODULEINSTANCE_H
#define CCUIMODULEINSTANCE_H

@class CCSModuleMetadata;
@protocol NSCopying, CCUIContentModule;

#import <Foundation/Foundation.h>


@interface CCUIModuleInstance : NSObject <NSCopying>



@property (readonly, nonatomic) CCSModuleMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSObject<CCUIContentModule> *module; // ivar: _module
@property (readonly, nonatomic) CCUILayoutSize prototypeModuleSize; // ivar: _prototypeModuleSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMetadata:(id)arg0 module:(id)arg1 prototypeModuleSize:(struct CCUILayoutSize )arg2 ;


@end


#endif