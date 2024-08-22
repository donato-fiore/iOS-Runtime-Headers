// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCONTENTLAUNCHERCLUSTERBRANDINGINFORMATIONSTRUCT_H
#define MTRCONTENTLAUNCHERCLUSTERBRANDINGINFORMATIONSTRUCT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRContentLauncherClusterStyleInformationStruct.h"

@interface MTRContentLauncherClusterBrandingInformationStruct : NSObject <NSCopying>



@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *background; // ivar: _background
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *logo; // ivar: _logo
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *progressBar; // ivar: _progressBar
@property (copy, nonatomic) NSString *providerName; // ivar: _providerName
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *splash; // ivar: _splash
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *waterMark; // ivar: _waterMark


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif