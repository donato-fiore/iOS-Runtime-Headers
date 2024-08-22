// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEELEMENTMODELBUILDER_H
#define GCGENERICDEVICEELEMENTMODELBUILDER_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceElementModelBuilder : NSObject

@property (nonatomic) NSInteger calibrationMax; // ivar: _calibrationMax
@property (nonatomic) NSInteger calibrationMin; // ivar: _calibrationMin
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSPredicate *predicate; // ivar: _predicate


+(Class)modelClass;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif