// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIIMAGETITLESUBTITLETILE_H
#define PXUIIMAGETITLESUBTITLETILE_H

@class NSString;


#import "PXUIImageTile.h"
#import "PXTitleSubtitleUILabel.h"
#import "PXImageTitleSubtitleSpec.h"

@interface PXUIImageTitleSubtitleTile : PXUIImageTile {
    PXTitleSubtitleUILabel *_label;
    PXImageTitleSubtitleSpec *_spec;
}


@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)view;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif