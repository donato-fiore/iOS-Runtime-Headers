// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABDOCUMENTDRAGMETADATA_H
#define TABDOCUMENTDRAGMETADATA_H

@class UIView<TabCollectionView>;

#import <Foundation/Foundation.h>

#import "TabDocument.h"

@interface TabDocumentDragMetadata : NSObject

@property (readonly, weak, nonatomic) UIView<TabCollectionView> *sourceTabView; // ivar: _sourceTabView
@property (readonly, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


-(id)initWithTabDocument:(id)arg0 sourceTabView:(id)arg1 ;


@end


#endif