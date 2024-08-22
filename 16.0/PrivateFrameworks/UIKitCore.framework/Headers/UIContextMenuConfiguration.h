// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTEXTMENUCONFIGURATION_H
#define UICONTEXTMENUCONFIGURATION_H

@class NSArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"
#import "UIResponder.h"

@interface UIContextMenuConfiguration : NSObject

@property (readonly, nonatomic) BOOL _clientDidSetBadgeCount;
@property (nonatomic) NSInteger _dci_badgeCount;
@property (copy, nonatomic) NSArray *_dci_secondaryItemIdentifiers;
@property (readonly, nonatomic) id *_effectiveInternalIdentifier;
@property (readonly, nonatomic) NSSet *_effectiveSecondaryItemIdentifiers;
@property (retain, nonatomic) id *_internalIdentifier; // ivar: __internalIdentifier
@property (retain, nonatomic) NSSet *_internalSecondaryItemIdentifiers; // ivar: __internalSecondaryItemIdentifiers
@property (retain, nonatomic) UITargetedPreview *_primarySourcePreview; // ivar: __primarySourcePreview
@property (retain, nonatomic) NSArray *_secondarySourcePreviews; // ivar: __secondarySourcePreviews
@property (copy, nonatomic) id *actionProvider; // ivar: _actionProvider
@property (nonatomic) NSInteger badgeCount; // ivar: _badgeCount
@property (weak, nonatomic) UIResponder *firstResponderTarget; // ivar: _firstResponderTarget
@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (nonatomic) NSInteger preferredMenuElementOrder; // ivar: _preferredMenuElementOrder
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (copy, nonatomic) NSSet *secondaryItemIdentifiers; // ivar: _secondaryItemIdentifiers


// +(id)configurationWithIdentifier:(id)arg0 previewProvider:(id)arg1 actionProvider:(unk)arg2  ;
-(BOOL)_isCollectionViewBackgroundMenu;
-(id)init;


@end


#endif