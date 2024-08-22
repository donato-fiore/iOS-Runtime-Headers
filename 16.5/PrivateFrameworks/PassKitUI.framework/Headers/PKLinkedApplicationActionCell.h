// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLINKEDAPPLICATIONACTIONCELL_H
#define PKLINKEDAPPLICATIONACTIONCELL_H

@class UIActivityIndicatorView, NSURL, NSString, UIColor, NSArray;
@protocol PKLinkedApplicationObserver;


#import "PKTableViewCell.h"
#import "PKLinkedApplication.h"

@interface PKLinkedApplicationActionCell : PKTableViewCell <PKLinkedApplicationObserver>

 {
    UIActivityIndicatorView *_activityIndicator;
}


@property (copy, nonatomic) NSURL *appLaunchURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIColor *disabledTextColor; // ivar: _disabledTextColor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication; // ivar: _linkedApplication
@property (copy, nonatomic) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinkedApplication:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg0 appLaunchURL:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)reloadApplicationStateIfNecessary;


@end


#endif