// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIVIEWCONTROLLERCONTENTPRESENTER_H
#define VUIVIEWCONTROLLERCONTENTPRESENTER_H

@class UIView, NSString;

#import <Foundation/Foundation.h>


@interface VUIViewControllerContentPresenter : NSObject

@property (nonatomic) BOOL contentHasBeenDeleted; // ivar: _contentHasBeenDeleted
@property (nonatomic) BOOL contentHasBeenManuallyDeleted; // ivar: _contentHasBeenManuallyDeleted
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSUInteger currentContentViewType; // ivar: _currentContentViewType
@property (retain, nonatomic) UIView *currentView; // ivar: _currentView
@property (copy, nonatomic) NSString *deletedContentErrorMessage; // ivar: _deletedContentErrorMessage
@property (retain, nonatomic) NSString *logName; // ivar: _logName
@property (copy, nonatomic) NSString *noContentErrorMessage; // ivar: _noContentErrorMessage
@property (copy, nonatomic) NSString *noContentErrorTitle; // ivar: _noContentErrorTitle
@property (retain, nonatomic) UIView *rootView; // ivar: _rootView


-(id)_createAlertViewWithTitle:(id)arg0 description:(id)arg1 ;
-(id)_logNameForContentViewType:(NSUInteger)arg0 ;
-(void)configureCurrentViewFrameForBounds:(struct CGRect )arg0 ;


@end


#endif