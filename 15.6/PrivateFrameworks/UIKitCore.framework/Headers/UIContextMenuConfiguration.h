// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICONTEXTMENUCONFIGURATION_H
#define UICONTEXTMENUCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface UIContextMenuConfiguration : NSObject

@property (copy, nonatomic) id *actionProvider; // ivar: _actionProvider
@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (copy, nonatomic) id *previewProvider; // ivar: _previewProvider
@property (retain, nonatomic) UITargetedPreview *stashedClientProvidedPreview; // ivar: _stashedClientProvidedPreview
@property (retain, nonatomic) UITargetedPreview *stashedSourcePreview; // ivar: _stashedSourcePreview


// +(id)configurationWithIdentifier:(id)arg0 previewProvider:(id)arg1 actionProvider:(unk)arg2  ;


@end


#endif