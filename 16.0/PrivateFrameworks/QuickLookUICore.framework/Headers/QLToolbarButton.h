// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTOOLBARBUTTON_H
#define QLTOOLBARBUTTON_H

@class UIAlertController, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLToolbarButtonItemRepresentation.h"

@interface QLToolbarButton : NSObject <NSSecureCoding>

 {
    QLToolbarButtonItemRepresentation *_currentItemRepresentation;
    UIAlertController *_alertController;
    id *_target;
    SEL _action;
}


@property UIEdgeInsets _additionalSelectionInsets; // ivar: __additionalSelectionInsets
@property (copy) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property BOOL disappearsOnTap; // ivar: _disappearsOnTap
@property BOOL enabled; // ivar: _enabled
@property BOOL forceToNavBar; // ivar: _forceToNavBar
@property (readonly) NSString *identifier; // ivar: _identifier
@property (copy) NSArray *options; // ivar: _options
@property NSUInteger placement; // ivar: _placement
@property BOOL roundedSelectedIndicator; // ivar: _roundedSelectedIndicator
@property BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property NSInteger systemItem; // ivar: _systemItem
@property (copy) NSString *title; // ivar: _title
@property BOOL useBundleImage; // ivar: _useBundleImage
@property BOOL useInternalSymbolImage; // ivar: _useInternalSymbolImage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_barButtonImage;
-(id)barButtonWithTarget:(id)arg0 action:(SEL)arg1 maxSize:(struct CGSize )arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleLongPress:(id)arg0 ;
-(void)invalidateCurrentState;


@end


#endif