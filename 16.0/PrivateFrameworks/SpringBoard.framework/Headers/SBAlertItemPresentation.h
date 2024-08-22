// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALERTITEMPRESENTATION_H
#define SBALERTITEMPRESENTATION_H

@class SBAlertItem, NSString;
@protocol BSDescriptionProviding, SBAlertItemPresenter;

#import <Foundation/Foundation.h>


@interface SBAlertItemPresentation : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) SBAlertItem *alertItem; // ivar: _alertItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBAlertItemPresenter> *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAlertItem:(id)arg0 presenter:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif