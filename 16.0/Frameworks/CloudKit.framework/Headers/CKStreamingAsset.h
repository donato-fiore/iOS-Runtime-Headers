// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSTREAMINGASSET_H
#define CKSTREAMINGASSET_H

@class NSURL, NSDate, NSString, NSData, C2RequestOptions;
@protocol CKRecordValue, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKStreamingAsset : NSObject <CKRecordValue, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger bytesUploaded;
@property (readonly, nonatomic) NSUInteger bytesUpperBound;
@property (readonly, copy, nonatomic) NSURL *contentDownloadURL;
@property (readonly, copy, nonatomic) NSDate *contentDownloadURLExpirationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *downloadURL; // ivar: _downloadURL
@property (copy, nonatomic) NSDate *downloadURLExpirationDate; // ivar: _downloadURLExpirationDate
@property (nonatomic) NSUInteger expectedSizeBytes; // ivar: _expectedSizeBytes
@property (copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (nonatomic) BOOL hasSize; // ivar: _hasSize
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *owner; // ivar: _owner
@property (copy, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (copy, nonatomic) C2RequestOptions *requestOptions; // ivar: _requestOptions
@property (nonatomic) NSUInteger reservedSize; // ivar: _reservedSize
@property (nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uploadReceipt; // ivar: _uploadReceipt
@property (copy, nonatomic) NSURL *uploadURL; // ivar: _uploadURL
@property (copy, nonatomic) NSDate *uploadURLExpirationDate; // ivar: _uploadURLExpirationDate


+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_initBare;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpectedSizeBytes:(NSUInteger)arg0 ;
-(void)copyServerFieldsFromStreamingAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif