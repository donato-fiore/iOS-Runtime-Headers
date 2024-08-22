// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMBUIMEDIATABLECELLCONFIGURATION_H
#define NMBUIMEDIATABLECELLCONFIGURATION_H

@class MPArtworkCatalog, UIColor, UIImage, NSString;

#import <Foundation/Foundation.h>

#import "NMBUIMediaTableCellDownloadState.h"

@interface NMBUIMediaTableCellConfiguration : NSObject

@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (copy, nonatomic) id *downloadIndicatorTapAction; // ivar: _downloadIndicatorTapAction
@property (retain, nonatomic) NMBUIMediaTableCellDownloadState *downloadState; // ivar: _downloadState
@property (retain, nonatomic) id *modelObject; // ivar: _modelObject
@property (retain, nonatomic) UIColor *placeholderIconColor; // ivar: _placeholderIconColor
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) NSString *placeholderSystemImageName; // ivar: _placeholderSystemImageName
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title




@end


#endif