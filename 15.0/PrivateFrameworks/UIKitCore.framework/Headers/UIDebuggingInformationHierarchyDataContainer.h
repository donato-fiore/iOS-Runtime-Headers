// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEBUGGINGINFORMATIONHIERARCHYDATACONTAINER_H
#define UIDEBUGGINGINFORMATIONHIERARCHYDATACONTAINER_H


#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIDebuggingInformationHierarchyDataContainer : NSObject

@property (nonatomic) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) NSInteger level; // ivar: _level
@property (weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 atLevel:(NSInteger)arg1 ;


@end


#endif