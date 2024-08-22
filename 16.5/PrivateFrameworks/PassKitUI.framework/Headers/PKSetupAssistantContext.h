// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETUPASSISTANTCONTEXT_H
#define PKSETUPASSISTANTCONTEXT_H

@class NSString, NSData;
@protocol PKPaymentSetupAssistantContextProtocol, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKSetupAssistantContext : NSObject <PKPaymentSetupAssistantContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *externalizedContext; // ivar: _externalizedContext
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger setupAssistant; // ivar: _setupAssistant
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSetupAssistant:(NSUInteger)arg0 ;
-(void)extendableDescription:(id)arg0 ;


@end


#endif