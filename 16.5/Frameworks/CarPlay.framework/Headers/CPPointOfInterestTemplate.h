// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPPOINTOFINTERESTTEMPLATE_H
#define CPPOINTOFINTERESTTEMPLATE_H

@class NSString, NSArray, NAFuture;
@protocol NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding, CPPointOfInterestTemplateDelegate;


#import "CPTemplate.h"
#import "CPBarButton.h"
#import "CPPointsOfInterestEntity.h"

@interface CPPointOfInterestTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding>



@property (retain, nonatomic) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) CPPointsOfInterestEntity *poiEntity; // ivar: _poiEntity
@property (weak, nonatomic) NSObject<CPPointOfInterestTemplateDelegate> *pointOfInterestDelegate; // ivar: _pointOfInterestDelegate
@property (retain, nonatomic) NSArray *pointsOfInterest;
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;


+(BOOL)supportsSecureCoding;
-(id)_pointOfInterestWithIdentifier:(id)arg0 ;
-(id)entity;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 pointsOfInterest:(id)arg1 selectedIndex:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)handleDidSelectPointOfInterestWithIdentifier:(id)arg0 ;
-(void)handleMapRegionDidChange:(struct ? )arg0 ;
-(void)performUpdate;


@end


#endif