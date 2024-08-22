// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABDOCUMENTMENUPROVIDER_H
#define TABDOCUMENTMENUPROVIDER_H


#import <Foundation/Foundation.h>


@interface TabDocumentMenuProvider : NSObject



+(id)_bottomMenuForTabDocument:(id)arg0 dataSource:(id)arg1 options:(NSUInteger)arg2 ;
+(id)_closeOtherTabsActionForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)_mainMenuForTabDocument:(id)arg0 dataSource:(id)arg1 options:(NSUInteger)arg2 ;
+(id)_presentBookmarksModalActionForTabDocument:(id)arg0 ;
+(id)_readerActionForTabDocument:(id)arg0 ;
+(id)_shareCommand;
+(id)_sortMenuForTabDocument:(id)arg0 dataSource:(id)arg1 ;
+(id)_stopReloadActionForTabDocument:(id)arg0 ;
+(id)_toggleContentBlockersActionForTab:(id)arg0 ;
+(id)_toggleVoiceSearchActionForTabDocument:(id)arg0 ;
+(id)actionProviderForTabDocument:(SEL)arg0 dataSource:(id)arg1 options:(id)arg2 ;
+(id)moveMenuForTabDocument:(id)arg0 dataSource:(id)arg1 ;


@end


#endif