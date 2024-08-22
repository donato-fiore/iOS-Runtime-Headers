// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTMOVIEMODEL_H
#define ICATTACHMENTMOVIEMODEL_H



#import "ICAttachmentModel.h"

@interface ICAttachmentMovieModel : ICAttachmentModel



+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)hasPreviews;
-(BOOL)hasThumbnailImage;
-(BOOL)shouldUsePlaceholderBoundsIfNecessary;
-(BOOL)showThumbnailInNoteList;
-(CGFloat)placeholderHeight;
-(CGFloat)placeholderWidth;
-(id)placeholderImageSystemName;
-(struct CGSize )intrinsicContentSize;
-(void)addLocation;
-(void)updateAttachmentSize;
-(void)updateFileBasedAttributes;


@end


#endif