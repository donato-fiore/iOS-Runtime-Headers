// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLITEM_H
#define ICQLITEM_H

@class QLItem, ICAttachment, NSString;
@protocol QLPreviewItemDataProvider;



@interface ICQLItem : QLItem <QLPreviewItemDataProvider>



@property (retain) ICAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttachment:(id)arg0 ;
-(id)previewItemTitle;
-(id)provideDataForItem:(id)arg0 ;


@end


#endif