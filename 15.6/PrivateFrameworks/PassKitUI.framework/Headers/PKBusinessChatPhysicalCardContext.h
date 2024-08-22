// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBUSINESSCHATPHYSICALCARDCONTEXT_H
#define PKBUSINESSCHATPHYSICALCARDCONTEXT_H

@class PKPaymentPass, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext>

 {
    PKPaymentPass *_paymentPass;
    NSInteger _intent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithPaymentPass:(id)arg0 intent:(NSInteger)arg1 ;
-(id)intentParameters;


@end


#endif