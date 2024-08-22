// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTHUMBNAILMETADATA_H
#define QLTHUMBNAILMETADATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLThumbnailMetadata : NSObject <NSSecureCoding>



@property NSInteger baseline; // ivar: _baseline
@property int inlinePreviewMode; // ivar: _inlinePreviewMode


+(BOOL)supportsSecureCoding;
+(id)thumbnailMetadataFromPropertiesDictionary:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif