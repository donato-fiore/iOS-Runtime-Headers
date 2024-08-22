// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABMENUPROVIDER_H
#define TABMENUPROVIDER_H


#import <Foundation/Foundation.h>


@interface TabMenuProvider : NSObject



+(id)_bottomMenuForTabDocument:(id)arg0 dataSource:(id)arg1 options:(NSUInteger)arg2 ;
+(id)_closeActionForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)_closeOtherTabsActionForTab:(id)arg0 inBackgroundTabGroup:(id)arg1 dataSource:(id)arg2 ;
+(id)_closeOtherTabsActionForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)_copyMenuForTabGroupTab:(id)arg0 ;
+(id)_mainMenuForTabDocument:(id)arg0 dataSource:(id)arg1 options:(NSUInteger)arg2 ;
+(id)_moveMenuForTabGroupTab:(id)arg0 inTabGroup:(id)arg1 dataSource:(id)arg2 ;
+(id)_presentBookmarksModalActionForTabDocument:(id)arg0 ;
+(id)_readerActionForTabDocument:(id)arg0 ;
+(id)_shareCommand;
+(id)_sortMenuForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)_sortMenuForTabGroupTab:(id)arg0 dataSource:(id)arg1 inTabGroup:(id)arg2 ;
+(id)_stopReloadActionForTabDocument:(id)arg0 ;
+(id)_toggleContentBlockersActionForTab:(id)arg0 ;
+(id)_toggleVoiceSearchActionForTabDocument:(id)arg0 ;
+(id)actionProviderForTabDocument:(SEL)arg0 dataSource:(id)arg1 options:(id)arg2 ;
+(id)actionProviderForTabGroupTab:(SEL)arg0 inTabGroup:(id)arg1 dataSource:(id)arg2 options:(id)arg3 ;
+(id)moveMenuForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)pinTabActionForTabDocument:(id)arg0 dataSource:(id)arg1 ;


@end


#endif