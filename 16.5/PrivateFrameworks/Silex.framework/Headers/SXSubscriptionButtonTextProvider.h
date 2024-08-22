// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSUBSCRIPTIONBUTTONTEXTPROVIDER_H
#define SXSUBSCRIPTIONBUTTONTEXTPROVIDER_H

@class NSString;
@protocol SXSubscriptionButtonTextProviding;

#import <Foundation/Foundation.h>


@interface SXSubscriptionButtonTextProvider : NSObject <SXSubscriptionButtonTextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 ;


@end


#endif