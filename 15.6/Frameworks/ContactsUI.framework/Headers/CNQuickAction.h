// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNQUICKACTION_H
#define CNQUICKACTION_H

@class NSString, UIImage, UIColor, UIView;

#import <Foundation/Foundation.h>

#import "CNQuickActionsManager.h"
#import "CNContactStyle.h"

@interface CNQuickAction : NSObject

@property (nonatomic, getter=isBackAction) BOOL backAction;
@property (nonatomic) BOOL cached; // ivar: _cached
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) BOOL dismissesWithAnimation; // ivar: _dismissesWithAnimation
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *globalIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (nonatomic) BOOL isLongPress; // ivar: _isLongPress
@property (weak, nonatomic) CNQuickActionsManager *manager; // ivar: _manager
@property (copy, nonatomic) id *performBlock; // ivar: _performBlock
@property (retain, nonatomic) CNContactStyle *previousStyle; // ivar: _previousStyle
@property (nonatomic) NSUInteger score; // ivar: _score
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL useDuetIfAvailable; // ivar: _useDuetIfAvailable


+(BOOL)reallyPerform;
+(id)actionWithTitle:(id)arg0 image:(id)arg1 block:(id)arg2 ;
+(id)defaultTitleForActionInCategory:(id)arg0 context:(NSInteger)arg1 ;
+(id)possibleTitlesForActionsInCategories:(id)arg0 context:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDuetInteraction:(id)arg0 ;
-(NSUInteger)hash;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(id)defaultTitleForContext:(NSInteger)arg0 ;
-(id)description;
-(id)imageForContext:(NSInteger)arg0 ;
-(id)init;
-(id)subtitleForContext:(NSInteger)arg0 ;
-(id)titleForContext:(NSInteger)arg0 ;
-(id)userActionType;
-(void)cancel;
-(void)perform;
-(void)performWithCompletionBlock:(id)arg0 ;


@end


#endif