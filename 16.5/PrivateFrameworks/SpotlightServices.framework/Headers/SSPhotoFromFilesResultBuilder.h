// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPHOTOFROMFILESRESULTBUILDER_H
#define SSPHOTOFROMFILESRESULTBUILDER_H



#import "SSPhotosResultBuilder.h"

@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder



+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)appBundleId;
-(id)buildCommand;
-(id)buildPreviewCommand;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;


@end


#endif