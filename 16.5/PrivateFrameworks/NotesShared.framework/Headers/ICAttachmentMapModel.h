// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTACHMENTMAPMODEL_H
#define ICATTACHMENTMAPMODEL_H



#import "ICAttachmentModel.h"

@interface ICAttachmentMapModel : ICAttachmentModel



+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)hasPreviews;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(id)MKMapItem;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(void)addLocation;


@end


#endif