// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEXTTOKENTEXTVIEWLAYOUTMANAGER_H
#define WFTEXTTOKENTEXTVIEWLAYOUTMANAGER_H

@class NSLayoutManager, NSString;
@protocol WFTextAttachmentSizeProvider;



@interface WFTextTokenTextViewLayoutManager : NSLayoutManager <WFTextAttachmentSizeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)getPreferredLeadingSpacing:(*CGFloat)arg0 trailingSpacing:(*CGFloat)arg1 forDrawingTextAttachment:(id)arg2 atCharacterIndex:(NSUInteger)arg3 ;


@end


#endif