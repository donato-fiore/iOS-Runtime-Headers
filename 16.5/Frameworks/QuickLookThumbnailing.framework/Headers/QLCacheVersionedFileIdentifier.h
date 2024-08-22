// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEVERSIONEDFILEIDENTIFIER_H
#define QLCACHEVERSIONEDFILEIDENTIFIER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLCacheFileIdentifier.h"
#import "QLThumbnailVersion.h"

@interface QLCacheVersionedFileIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly) QLCacheFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property (readonly) QLThumbnailVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)versionedFileIdentifierWithThumbnailRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileIdentifier:(id)arg0 version:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif