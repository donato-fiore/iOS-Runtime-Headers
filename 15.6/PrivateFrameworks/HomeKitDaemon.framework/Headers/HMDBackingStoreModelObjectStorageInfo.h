// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTOREMODELOBJECTSTORAGEINFO_H
#define HMDBACKINGSTOREMODELOBJECTSTORAGEINFO_H

@class HMFObject, NSSet, HMFVersion;



@interface HMDBackingStoreModelObjectStorageInfo : HMFObject

@property (readonly, nonatomic) Class classObj; // ivar: _classObj
@property (readonly, nonatomic) NSSet *decodeClasses; // ivar: _decodeClasses
@property (readonly, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) BOOL defaultValueSet; // ivar: _defaultValueSet
@property (readonly, nonatomic) NSUInteger logging; // ivar: _logging
@property (retain, nonatomic) HMFVersion *readOnly; // ivar: _readOnly
@property (retain, nonatomic) HMFVersion *unavailable; // ivar: _unavailable


+(id)deprecatedField;
+(id)infoWithClass:(Class)arg0 ;
+(id)infoWithClass:(Class)arg0 additionalDecodeClasses:(id)arg1 ;
+(id)infoWithClass:(Class)arg0 defaultValue:(id)arg1 ;
+(id)infoWithClass:(Class)arg0 defaultValue:(id)arg1 logging:(NSUInteger)arg2 ;
+(id)infoWithClass:(Class)arg0 defaultValue:(id)arg1 logging:(NSUInteger)arg2 readOnly:(id)arg3 ;
+(id)infoWithClass:(Class)arg0 defaultValue:(id)arg1 logging:(NSUInteger)arg2 readOnly:(id)arg3 unavailable:(id)arg4 ;
+(id)infoWithClass:(Class)arg0 logging:(NSUInteger)arg1 ;
+(id)infoWithClass:(Class)arg0 logging:(NSUInteger)arg1 readOnly:(id)arg2 ;
+(id)infoWithClass:(Class)arg0 logging:(NSUInteger)arg1 readOnly:(id)arg2 unavailable:(id)arg3 ;
-(id)description;
-(id)initWithClass:(Class)arg0 logging:(NSUInteger)arg1 readOnly:(id)arg2 unavailable:(id)arg3 defaultSet:(BOOL)arg4 defaultValue:(id)arg5 additonalDecodeClasses:(id)arg6 ;


@end


#endif