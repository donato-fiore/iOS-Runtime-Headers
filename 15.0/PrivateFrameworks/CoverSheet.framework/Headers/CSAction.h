// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSACTION_H
#define CSACTION_H

@class SBFLockScreenActionContext;

#import <Foundation/Foundation.h>


@interface CSAction : NSObject

@property (retain, nonatomic) SBFLockScreenActionContext *context; // ivar: _context
@property (nonatomic) NSInteger type; // ivar: _type


+(id)actionWithContext:(id)arg0 ;
+(id)actionWithType:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif