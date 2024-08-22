// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEINPUTEVENTDRIVERMODELBUILDER_H
#define GCGENERICDEVICEINPUTEVENTDRIVERMODELBUILDER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceInputEventDriverModelBuilder : NSObject

@property (copy, nonatomic) NSSet *gamepadEventFields; // ivar: _gamepadEventFields


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif