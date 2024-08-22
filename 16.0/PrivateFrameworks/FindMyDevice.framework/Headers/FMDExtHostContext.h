// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDEXTHOSTCONTEXT_H
#define FMDEXTHOSTCONTEXT_H

@class NSString;
@protocol FMDExtAccessoryDelegateProtocol;


#import "FMDExtensionContext.h"

@interface FMDExtHostContext : FMDExtensionContext <FMDExtAccessoryDelegateProtocol>



@property (retain, nonatomic) NSObject<FMDExtAccessoryDelegateProtocol> *accessoryDelegate; // ivar: _accessoryDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif