// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUACTIONROWITEMVIEWMODEL_H
#define MUACTIONROWITEMVIEWMODEL_H

@class GEOObserverHashTable, NSString, UIColor;

#import <Foundation/Foundation.h>


@interface MUActionRowItemViewModel : NSObject {
    GEOObserverHashTable *_observers;
}


@property (readonly, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) UIColor *preferredBackgroundColor; // ivar: _preferredBackgroundColor
@property (readonly, nonatomic) UIColor *preferredTintColor; // ivar: _preferredTintColor
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (readonly, nonatomic) NSString *titleText; // ivar: _titleText


-(id)analyticsButtonValue;
-(id)analyticsButtonValues;
-(id)buildMenuWithPresentationOptions:(id)arg0 ;
-(id)init;
-(void)_notifyObservers;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif