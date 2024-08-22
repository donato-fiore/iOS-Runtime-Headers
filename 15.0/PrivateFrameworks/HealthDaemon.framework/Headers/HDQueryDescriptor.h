// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUERYDESCRIPTOR_H
#define HDQUERYDESCRIPTOR_H

@class NSDictionary, _HKFilter, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDSQLitePredicate.h"

@interface HDQueryDescriptor : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *authorizationFilter; // ivar: _authorizationFilter
@property (readonly, copy, nonatomic) HDSQLitePredicate *deletedObjectsPredicate; // ivar: _deletedObjectsPredicate
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions; // ivar: _encodingOptions
@property (readonly, copy, nonatomic) _HKFilter *filter; // ivar: _filter
@property (readonly, copy, nonatomic) NSSet *restrictedSourceEntities; // ivar: _restrictedSourceEntities
@property (readonly, copy, nonatomic) HDSQLitePredicate *samplePredicate; // ivar: _samplePredicate
@property (readonly, copy, nonatomic) NSSet *sampleTypes; // ivar: _sampleTypes


+(id)queryDescriptorWithSampleType:(id)arg0 ;
+(id)queryDescriptorWithSampleTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
// -(id)initWithSampleTypes:(id)arg0 encodingOptions:(id)arg1 restrictedSourceEntities:(id)arg2 authorizationFilter:(id)arg3 filter:(unk)arg4 samplePredicate:(id)arg5 deletedObjectsPredicate:(id)arg6  ;
// -(id)initWithSampleTypes:(id)arg0 encodingOptions:(id)arg1 restrictedSourceEntities:(id)arg2 authorizationFilter:(id)arg3 samplePredicate:(unk)arg4  ;


@end


#endif