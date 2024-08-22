// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONTACTLESSINTERFACESESSIONDEFAULTBEHAVIOR_H
#define PKCONTACTLESSINTERFACESESSIONDEFAULTBEHAVIOR_H

@class NSString;
@protocol PKContactlessInterfaceSessionDelegate;

#import <Foundation/Foundation.h>


@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)attachDefaultBehaviorToSession:(id)arg0 ;
-(void)_processContext:(id)arg0 ;
-(void)contactlessInterfaceSession:(id)arg0 didEndPersistentCardEmulationWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didFinishTransactionWithContext:(id)arg1 ;


@end


#endif