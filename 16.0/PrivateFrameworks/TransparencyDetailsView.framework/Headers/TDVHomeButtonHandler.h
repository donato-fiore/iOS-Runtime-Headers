// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDVHOMEBUTTONHANDLER_H
#define TDVHOMEBUTTONHANDLER_H

@class NSString;
@protocol SBSHardwareButtonEventConsuming, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BSInvalidatable> *homeButtonAssertion; // ivar: _homeButtonAssertion
@property (copy, nonatomic) id *homeButtonHandlerCallback; // ivar: _homeButtonHandlerCallback
@property (readonly) Class superclass;


+(id)handlerWithCompletion:(id)arg0 ;
-(id)initWithCompletion:(id)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)startConsumingHardwarePresses:(id)arg0 ;
-(void)stopConsumingHardwarePresses;


@end


#endif