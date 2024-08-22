// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBSTREAMINGASSET_H
#define HMBSTREAMINGASSET_H

@class HMFObject, NSString, CKStreamingAsset;
@protocol NSSecureCoding, HMBModelNativeCKWrapper, HMBModelObjectMerging;



@interface HMBStreamingAsset : HMFObject <NSSecureCoding, HMBModelNativeCKWrapper, HMBModelObjectMerging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKStreamingAsset *downloadStreamingAsset; // ivar: _downloadStreamingAsset
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CKStreamingAsset *uploadStreamingAsset; // ivar: _uploadStreamingAsset


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)applyNativeCKValue:(id)arg0 fromSource:(NSUInteger)arg1 associatingWith:(id)arg2 toModel:(id)arg3 propertyNamed:(id)arg4 ;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)hmbObjectByMergingFromObject:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUploadStreamingAsset:(id)arg0 ;
-(id)initWithUploadStreamingAsset:(id)arg0 downloadStreamingAsset:(id)arg1 ;
-(id)nativeCKValueWithEncodingContext:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif