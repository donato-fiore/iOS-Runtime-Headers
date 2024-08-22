// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBASECOMMANDHANDLERREGISTRY_H
#define IMBASECOMMANDHANDLERREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface IMBaseCommandHandlerRegistry : NSObject

@property (readonly, nonatomic) NSDictionary *handlers;
@property (readonly, nonatomic) NSDictionary *lockdownHandlers; // ivar: _lockdownHandlers
@property (readonly, nonatomic, getter=isLockedDown) BOOL lockedDown;
@property (readonly, nonatomic) NSDictionary *standardHandlers; // ivar: _standardHandlers


-(BOOL)canAddCommand:(id)arg0 ;
-(BOOL)hasHandlerForCommand:(id)arg0 ;
-(BOOL)hasLockdownHandlerForCommand:(id)arg0 ;
-(id)handlerForCommand:(id)arg0 ;
-(id)init;
-(id)noopHandlerForCommand:(id)arg0 ;
-(void)setLockdownHandler:(id)arg0 forCommand:(id)arg1 ;
-(void)setPassThroughLockdownHandlerForCommand:(id)arg0 ;
-(void)setStandardHandler:(id)arg0 forCommand:(id)arg1 ;


@end


#endif