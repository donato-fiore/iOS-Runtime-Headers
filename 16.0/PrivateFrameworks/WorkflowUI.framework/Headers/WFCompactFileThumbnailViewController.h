// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPACTFILETHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTFILETHUMBNAILVIEWCONTROLLER_H

@class NSString, WFFileType;
@protocol UIPointerInteractionDelegate;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactFileThumbnailViewController : WFCompactThumbnailViewController <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFFileType *fileType; // ivar: _fileType
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)initWithFileType:(id)arg0 filename:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif