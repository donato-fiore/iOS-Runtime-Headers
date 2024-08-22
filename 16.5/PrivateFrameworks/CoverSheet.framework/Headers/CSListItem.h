// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLISTITEM_H
#define CSLISTITEM_H

@class NCNotificationListSupplementaryViewConfiguration, NSDate, UIViewController<CSListItemHosting>, NSString, UIAction, NSArray;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface CSListItem : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSDate *contentCreatedDate; // ivar: _contentCreatedDate
@property (retain, nonatomic) UIViewController<CSListItemHosting> *contentHost; // ivar: _contentHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIAction *onTapAction; // ivar: _onTapAction
@property (nonatomic) BOOL prefersProminentPresentationAndDismissal; // ivar: _prefersProminentPresentationAndDismissal
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *swipeActions; // ivar: _swipeActions


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 groupingIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif