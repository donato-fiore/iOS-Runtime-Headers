// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MODULE_H
#define MODULE_H


#import <Foundation/Foundation.h>

#import "MechanismManager.h"

@interface Module : NSObject

@property (readonly, nonatomic) MechanismManager *mechanismManager; // ivar: _mechanismManager
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)missingSubclassErrorWithIdentifier:(id)arg0 ;
-(id)initWithMechanismManager:(id)arg0 type:(NSInteger)arg1 ;
-(void)contextPluginWithExternalizedContext:(id)arg0 reply:(id)arg1 ;
-(void)trackPlugin:(id)arg0 processId:(int)arg1 proxy:(id)arg2 context:(id)arg3 invalidationBlock:(id)arg4 ;
-(void)untrackPlugin:(id)arg0 ;


@end


#endif