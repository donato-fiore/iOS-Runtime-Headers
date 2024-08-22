// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCANALYSISDEBUGMENUPROVIDER_H
#define VKCANALYSISDEBUGMENUPROVIDER_H

@class UIContextMenuInteraction, NSString;
@protocol UIContextMenuInteractionDelegate, VKAnalysisDebugInfoProvider;

#import <Foundation/Foundation.h>


@interface VKCAnalysisDebugMenuProvider : NSObject <UIContextMenuInteractionDelegate>



@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<VKAnalysisDebugInfoProvider> *provider; // ivar: _provider
@property (readonly) Class superclass;


-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)menuFromElements:(id)arg0 title:(id)arg1 ;
-(id)menuFromProvider:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)presentDebugMenuProvider:(id)arg0 fromView:(id)arg1 rect:(struct CGRect )arg2 ;


@end


#endif