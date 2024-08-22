// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXACTIONMANAGER_H
#define SXACTIONMANAGER_H

@class NSString;
@protocol SXActionManager, SXActionActivityManager, SXPostActionHandlerManager, SXActionViewManager;

#import <Foundation/Foundation.h>

#import "SXActionManagerPreview.h"

@interface SXActionManager : NSObject <SXActionManager>



@property (readonly, nonatomic) NSObject<SXActionActivityManager> *activityManager; // ivar: _activityManager
@property (retain, nonatomic) SXActionManagerPreview *currentPreview; // ivar: _currentPreview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXPostActionHandlerManager> *postActionHandlerManager; // ivar: _postActionHandlerManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXActionViewManager> *viewManager; // ivar: _viewManager


-(id)contextMenuConfigurationForAction:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(id)initWithActionActivityManager:(id)arg0 viewManager:(id)arg1 postActionHandlerManager:(id)arg2 ;
-(id)previewViewControllerForAction:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)notifyPostActionHandlers:(id)arg0 action:(id)arg1 state:(NSUInteger)arg2 ;
-(void)performAction:(id)arg0 postActionHandlers:(id)arg1 ;
-(void)performAction:(id)arg0 postActionHandlers:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 mode:(NSUInteger)arg4 ;


@end


#endif