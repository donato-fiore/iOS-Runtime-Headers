// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOLIBRARYPROCESSINGPROGRESSROWCELL_H
#define _PXPHOTOLIBRARYPROCESSINGPROGRESSROWCELL_H

@class PTUIRowTableViewCell, UIImage, NSString;



@interface _PXPhotoLibraryProcessingProgressRowCell : PTUIRowTableViewCell {
    BOOL _hasRequestedBriefDescription;
}


@property (retain, nonatomic) UIImage *briefImage; // ivar: _briefImage
@property (retain, nonatomic) NSString *briefTitle; // ivar: _briefTitle


-(void)_handleBriefDescriptionResultsWithTitle:(id)arg0 image:(id)arg1 ;
-(void)updateDisplayedContent;


@end


#endif