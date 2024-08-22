// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCONTEXT_H
#define HUQUICKCONTROLCONTEXT_H

@class NSSet, HMHome;
@protocol HUQuickControlItemUpdating;

#import <Foundation/Foundation.h>


@interface HUQuickControlContext : NSObject

@property (readonly, copy, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (nonatomic) NSUInteger controlOrientation; // ivar: _controlOrientation
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, weak, nonatomic) NSObject<HUQuickControlItemUpdating> *itemUpdater; // ivar: _itemUpdater
@property (nonatomic) NSUInteger preferredControl; // ivar: _preferredControl
@property (readonly, nonatomic) Class quickControlClass; // ivar: _quickControlClass


-(Class)viewProfileClass;
-(id)affectedCharacteristics;
-(id)initWithQuickControlClass:(Class)arg0 controlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;


@end


#endif