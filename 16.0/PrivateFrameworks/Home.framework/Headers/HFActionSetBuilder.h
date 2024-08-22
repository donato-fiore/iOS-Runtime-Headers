// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACTIONSETBUILDER_H
#define HFACTIONSETBUILDER_H

@class NSString, NSSet, UIColor;
@protocol HFComparable, HFAccessoryLikeObjectContainer;


#import "HFAbstractBaseActionSetBuilder.h"
#import "HFImageIconDescriptor.h"

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFComparable, HFAccessoryLikeObjectContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
@property (retain, nonatomic) HFImageIconDescriptor *iconDescriptor; // ivar: _iconDescriptor
@property (retain, nonatomic) UIColor *iconTintColor; // ivar: _iconTintColor
@property (nonatomic) BOOL isActionSetDeleted; // ivar: _isActionSetDeleted
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL showInHomeDashboard; // ivar: _showInHomeDashboard
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)_deleteActionSet:(id)arg0 fromHome:(id)arg1 ;
-(id)_lazilyUpdateIcon;
-(id)_lazilyUpdateValueForContextType:(NSUInteger)arg0 ;
-(id)_performValidation;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteActionSet;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(void)updateFromActionSetBuilder:(id)arg0 ;


@end


#endif