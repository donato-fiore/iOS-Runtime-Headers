// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMEDIASELECTIONMENUCONTROLLER_H
#define AVMEDIASELECTIONMENUCONTROLLER_H

@class UIMenu, NSArray;
@protocol AVMediaSelectionMenuDelegate;

#import <Foundation/Foundation.h>


@interface AVMediaSelectionMenuController : NSObject {
    UIMenu *_audibleOptionsMenu;
    UIMenu *_legibleOptionsMenu;
}


@property (copy, nonatomic) NSArray *audibleOptions; // ivar: _audibleOptions
@property (readonly) UIMenu *audibleOptionsMenu;
@property (nonatomic) NSUInteger currentAudibleOptionIndex; // ivar: _currentAudibleOptionIndex
@property (nonatomic) NSUInteger currentLegibleOptionIndex; // ivar: _currentLegibleOptionIndex
@property (weak, nonatomic) NSObject<AVMediaSelectionMenuDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *legibleOptions; // ivar: _legibleOptions
@property (readonly) UIMenu *legibleOptionsMenu;


-(id)_menuForOptions:(id)arg0 withIdentifier:(id)arg1 ;
-(id)initWithAudibleOptions:(id)arg0 legibleOptions:(id)arg1 ;
-(void)_updateSelectionStateForMenu:(id)arg0 selectedIndex:(NSUInteger)arg1 ;


@end


#endif