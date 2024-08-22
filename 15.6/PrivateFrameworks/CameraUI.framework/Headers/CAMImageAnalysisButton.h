// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMIMAGEANALYSISBUTTON_H
#define CAMIMAGEANALYSISBUTTON_H

@class VKImageAnalysisButton;
@protocol CAMImageAnalysisButtonDelegate;



@interface CAMImageAnalysisButton : VKImageAnalysisButton

@property (nonatomic, getter=isContextMenuDisplayed, setter=_setContextMenuDisplayed:) BOOL contextMenuDisplayed; // ivar: _contextMenuDisplayed
@property (weak, nonatomic) NSObject<CAMImageAnalysisButtonDelegate> *delegate; // ivar: _delegate


-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;


@end


#endif