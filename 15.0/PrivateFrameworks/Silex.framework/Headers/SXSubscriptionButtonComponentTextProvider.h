// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSUBSCRIPTIONBUTTONCOMPONENTTEXTPROVIDER_H
#define SXSUBSCRIPTIONBUTTONCOMPONENTTEXTPROVIDER_H

@class NSString;
@protocol SXButtonComponentTextProvider, SXSubscriptionButtonTextProviding;

#import <Foundation/Foundation.h>


@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXSubscriptionButtonTextProviding> *textProvider; // ivar: _textProvider


-(id)initWithTextProvider:(id)arg0 ;
-(id)textForComponent:(id)arg0 ;


@end


#endif