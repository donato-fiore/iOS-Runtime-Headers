// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETUPASSISTANTUTILITYCONTEXT_H
#define PKSETUPASSISTANTUTILITYCONTEXT_H

@class NSString, NSData;
@protocol PKPaymentSetupAssistantContextProtocol;

#import <Foundation/Foundation.h>


@interface PKSetupAssistantUtilityContext : NSObject <PKPaymentSetupAssistantContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *externalizedContext; // ivar: externalizedContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger setupAssistant; // ivar: _setupAssistant
@property (readonly) Class superclass;


-(id)initWithSetupAssistant:(NSUInteger)arg0 ;


@end


#endif