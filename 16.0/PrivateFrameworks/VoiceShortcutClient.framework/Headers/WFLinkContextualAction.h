// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKCONTEXTUALACTION_H
#define WFLINKCONTEXTUALACTION_H

@class NSString, LNAction;


#import "WFContextualAction.h"

@interface WFLinkContextualAction : WFContextualAction

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) LNAction *linkAction; // ivar: _linkAction


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsUserInterfaceWhenRunning;
-(NSUInteger)hash;
-(id)initWithAction:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif