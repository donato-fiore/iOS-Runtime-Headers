// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDISPLAYMODULE_H
#define CBDISPLAYMODULE_H

@class NSString;
@protocol CBContainerModuleProtocol, CBStatusInfoProtocol;


#import "CBModule.h"

@interface CBDisplayModule : CBModule <CBContainerModuleProtocol, CBStatusInfoProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif