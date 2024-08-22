// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATEDOCUMENTATIONMETADATA_H
#define HMSOFTWAREUPDATEDOCUMENTATIONMETADATA_H

@class NSURL, HMFDigest, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSURL *URL; // ivar: _URL
@property (readonly, copy) HMFDigest *digest; // ivar: _digest
@property (readonly, copy) NSUUID *metadataDigestUUID; // ivar: _metadataDigestUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 digest:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif