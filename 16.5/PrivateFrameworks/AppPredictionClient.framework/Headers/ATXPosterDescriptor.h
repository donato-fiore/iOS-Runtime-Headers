// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERDESCRIPTOR_H
#define ATXPOSTERDESCRIPTOR_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXPosterDescriptorGalleryOptions.h"

@interface ATXPosterDescriptor : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_coreIdentifier;
}


@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy, nonatomic) NSString *coreIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) ATXPosterDescriptorGalleryOptions *galleryOptions; // ivar: _galleryOptions
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSNumber *score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPosterDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 extensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 galleryOptions:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif