// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDENTERPRISEAPPMETADATA_H
#define ASDENTERPRISEAPPMETADATA_H

@class NSString, NSURL;
@protocol ASDAppMetadata, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL hideUserPrompts; // ivar: _hideUserPrompts
@property (readonly) NSURL *manifestURL; // ivar: _manifestURL
@property (readonly) NSInteger metadataType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManifestURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif