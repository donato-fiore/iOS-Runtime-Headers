// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMODELFIELD_H
#define HMBMODELFIELD_H

@class HMFObject, NSString, HMFVersion;
@protocol NSCopying, NSMutableCopying;



@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) Class classObj; // ivar: _classObj
@property (nonatomic) BOOL conformsToHMBModelNativeCKWrapper; // ivar: _conformsToHMBModelNativeCKWrapper
@property (copy, nonatomic) id *decodeBlock; // ivar: _decodeBlock
@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) id *descriptionBlock; // ivar: _descriptionBlock
@property (copy, nonatomic) id *encodeBlock; // ivar: _encodeBlock
@property (nonatomic) BOOL encrypted; // ivar: _encrypted
@property (nonatomic) BOOL excludeFromCloudStorage; // ivar: _excludeFromCloudStorage
@property (retain, nonatomic) NSString *externalRecordField; // ivar: _externalRecordField
@property (nonatomic) NSUInteger loggingVisibility; // ivar: _loggingVisibility
@property (nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (copy, nonatomic) HMFVersion *readonlyVersion; // ivar: _readonlyVersion
@property (copy, nonatomic) HMFVersion *unavailableVersion; // ivar: _unavailableVersion


+(id)deprecatedField;
+(id)fieldWithClass:(Class)arg0 ;
+(id)fieldWithClass:(Class)arg0 options:(id)arg1 ;
+(id)optionalFieldWithClass:(Class)arg0 ;
+(id)optionalFieldWithClass:(Class)arg0 options:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeQueryableValue:(id)arg0 ;
-(id)description;
-(id)descriptionForEncodedQueryableValue:(id)arg0 ;
-(id)encodeQueryableValue:(id)arg0 ;
-(id)initWithClass:(Class)arg0 ;
-(id)initWithClass:(Class)arg0 options:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif