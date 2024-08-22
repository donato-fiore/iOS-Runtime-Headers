// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPVOICECONTROLTEMPLATE_H
#define CPVOICECONTROLTEMPLATE_H

@class NSString, NAFuture, NSArray;
@protocol CPVoiceControlTemplateDelegate;


#import "CPTemplate.h"

@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate>



@property (readonly, copy, nonatomic) NSString *activeStateIdentifier; // ivar: _activeStateIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, copy, nonatomic) NSArray *voiceControlStates; // ivar: _voiceControlStates


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVoiceControlStates:(id)arg0 ;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)activateVoiceControlStateWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;


@end


#endif