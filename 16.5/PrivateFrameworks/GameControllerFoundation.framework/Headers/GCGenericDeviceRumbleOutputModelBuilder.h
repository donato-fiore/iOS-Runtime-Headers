// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICERUMBLEOUTPUTMODELBUILDER_H
#define GCGENERICDEVICERUMBLEOUTPUTMODELBUILDER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject

@property (copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (copy, nonatomic) NSArray *fields; // ivar: _fields


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif