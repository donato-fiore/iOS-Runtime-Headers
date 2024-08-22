// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYCONTEXTSECTION_H
#define HKOVERLAYCONTEXTSECTION_H

@class UIAction, NSString, NSArray;
@protocol HKDisplayTypeContextItemSection;

#import <Foundation/Foundation.h>


@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection>



@property (readonly, nonatomic) UIAction *accessoryButtonAction; // ivar: _accessoryButtonAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: items
@property (readonly, nonatomic) NSString *localizedSectionTitle; // ivar: _localizedSectionTitle
@property (readonly, nonatomic) NSArray *overlayContextItems; // ivar: _overlayContextItems
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: title


-(id)initWithSectionTitle:(id)arg0 overlayContextItems:(id)arg1 ;
-(id)initWithSectionTitle:(id)arg0 overlayContextItems:(id)arg1 accessoryButtonAction:(id)arg2 ;


@end


#endif