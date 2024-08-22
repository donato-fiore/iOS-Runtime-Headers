// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDEXTVENDORCONTEXT_H
#define FMDEXTVENDORCONTEXT_H

@class NSString;
@protocol FMDExtAccessoryProtocol;


#import "FMDExtensionContext.h"

@interface FMDExtVendorContext : FMDExtensionContext <FMDExtAccessoryProtocol>



@property (retain, nonatomic) NSObject<FMDExtAccessoryProtocol> *accessoryProvider; // ivar: _accessoryProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)connectionStatusForAccessory:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchAllAccessoriesInfo:(id)arg0 withCompletion:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)getStyleForAccessory:(id)arg0 info:(id)arg1 withCompletion:(id)arg2 ;
-(void)safetyAlertForAccessory:(id)arg0 info:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif