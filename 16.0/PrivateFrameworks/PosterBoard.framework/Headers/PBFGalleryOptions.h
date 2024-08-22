// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGALLERYOPTIONS_H
#define PBFGALLERYOPTIONS_H

@class NSNumber, NSString, ATXFaceGalleryItem;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBFGalleryOptions : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *modeSemanticTypeToCreate; // ivar: _modeSemanticTypeToCreate
@property (copy, nonatomic) NSString *modeSymbolImageName; // ivar: _modeSymbolImageName
@property (retain, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem; // ivar: _suggestedGalleryItem


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif