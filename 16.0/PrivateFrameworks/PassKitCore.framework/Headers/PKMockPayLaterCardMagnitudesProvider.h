// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMOCKPAYLATERCARDMAGNITUDESPROVIDER_H
#define PKMOCKPAYLATERCARDMAGNITUDESPROVIDER_H

@class NSString;
@protocol PKPayLaterCardMagnitudesProvider;

#import <Foundation/Foundation.h>

#import "PKPayLaterCardMagnitudes.h"

@interface PKMockPayLaterCardMagnitudesProvider : NSObject <PKPayLaterCardMagnitudesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPayLaterCardMagnitudes *magnitudes; // ivar: _magnitudes
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(void)refreshMagnitudes;


@end


#endif