// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYALERT_H
#define SBACTIVITYALERT_H

@class NSString, ACUISActivityAlertOptions;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBActivityItem.h"

@interface SBActivityAlert : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBActivityItem *item; // ivar: _item
@property (readonly, nonatomic) ACUISActivityAlertOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithItem:(id)arg0 payloadIdentifier:(id)arg1 options:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif