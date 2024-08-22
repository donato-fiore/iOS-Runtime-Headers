// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPARAMETEREDITORHOSTINGCELLCONTEXT_H
#define WFPARAMETEREDITORHOSTINGCELLCONTEXT_H

@class UITraitCollection;
@protocol WFComponentNavigationContext;

#import <Foundation/Foundation.h>

#import "WFModuleAppearance.h"
#import "WFParameterEditorHostingCell.h"

@interface WFParameterEditorHostingCellContext : NSObject

@property (retain, nonatomic) WFModuleAppearance *appearance; // ivar: _appearance
@property (weak, nonatomic) WFParameterEditorHostingCell *cell; // ivar: _cell
@property (retain, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection




@end


#endif