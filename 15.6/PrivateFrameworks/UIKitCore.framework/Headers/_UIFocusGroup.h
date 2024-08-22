// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSGROUP_H
#define _UIFOCUSGROUP_H

@class NSMutableArray, NSArray, NSString;
@protocol UICoordinateSpace, UIFocusItem;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIFocusGroup.h"

@interface _UIFocusGroup : NSObject {
    ? _flags;
    NSMutableArray *_childGroups;
    NSMutableArray *_items;
}


@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) NSArray *childGroups;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=_owningView) UIView *owningView; // ivar: _owningView
@property (readonly, weak, nonatomic) _UIFocusGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) NSObject<UIFocusItem> *primaryItem; // ivar: _primaryItem
@property (readonly, nonatomic) CGRect primaryRect; // ivar: _primaryRect


+(id)nullGroupWithCoordinateSpace:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFocusGroup:(id)arg0 ;
-(NSUInteger)hash;
-(id)_deepCopyWithNewIdentifierToGroupMap:(id)arg0 ;
-(id)childGroupWithIdentifier:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentGroup:(id)arg1 coordinateSpace:(id)arg2 ;
-(void)_insertChildGroup:(id)arg0 ;
-(void)_insertItem:(id)arg0 ;
-(void)_invalidateChildGroupOrder;
-(void)_invalidateItemOrder;
-(void)_invalidatePrimaryItem;
-(void)_invalidatePrimaryRect;
-(void)_updateWithEnvironment:(id)arg0 ;
-(void)_validateChildGroupOrderIfNecessary;
-(void)_validateItemOrderIfNecessary;
-(void)_validatePrimaryItemIfNecessary;
-(void)_validatePrimaryRectIfNeccessary;


@end


#endif