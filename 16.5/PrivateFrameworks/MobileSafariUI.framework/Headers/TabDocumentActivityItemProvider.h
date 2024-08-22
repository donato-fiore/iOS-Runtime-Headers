// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABDOCUMENTACTIVITYITEMPROVIDER_H
#define TABDOCUMENTACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider;


#import "TabDocument.h"

@interface TabDocumentActivityItemProvider : SFActivityItemProvider

@property (readonly, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


-(id)initWithTabDocument:(id)arg0 ;
-(id)item;


@end


#endif