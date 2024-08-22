// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCREATIONMETADATACOPYOPTIONS_H
#define PHASSETCREATIONMETADATACOPYOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL shouldCopySpatialOverCaptureResources; // ivar: _shouldCopySpatialOverCaptureResources
@property (nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords; // ivar: _shouldCopyTitleDescriptionAndKeywords


+(BOOL)supportsSecureCoding;
+(id)metadataCopyOptionsForPublishingOriginals;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDict:(id)arg0 ;
-(id)plRepresentation;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif