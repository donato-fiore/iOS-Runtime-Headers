// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSACTION_H
#define CSACTION_H

@class SBFLockScreenActionContext;

#import <Foundation/Foundation.h>


@interface CSAction : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (retain, nonatomic) SBFLockScreenActionContext *context; // ivar: _context
@property (nonatomic) NSInteger type; // ivar: _type


+(id)actionWithContext:(id)arg0 ;
+(id)actionWithType:(NSInteger)arg0 ;
+(id)actionWithType:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif