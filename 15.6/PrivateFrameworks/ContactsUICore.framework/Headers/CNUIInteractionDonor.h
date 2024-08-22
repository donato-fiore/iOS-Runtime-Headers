// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIINTERACTIONDONOR_H
#define CNUIINTERACTIONDONOR_H

@class NSString;
@protocol CNUIInteractionDonor;

#import <Foundation/Foundation.h>


@interface CNUIInteractionDonor : NSObject <CNUIInteractionDonor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(void)donateInteraction:(id)arg0 ;


@end


#endif