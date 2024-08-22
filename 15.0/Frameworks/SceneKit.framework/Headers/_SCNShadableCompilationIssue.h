// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SCNSHADABLECOMPILATIONISSUE_H
#define _SCNSHADABLECOMPILATIONISSUE_H

@class NSString;
@protocol SCNShadable;

#import <Foundation/Foundation.h>


@interface _SCNShadableCompilationIssue : NSObject

@property (readonly, nonatomic) NSString *effectiveModifier; // ivar: _effectiveModifier
@property (readonly, nonatomic) NSString *entryPoint; // ivar: _entryPoint
@property (readonly, nonatomic) NSInteger line; // ivar: _line
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSObject<SCNShadable> *shadable; // ivar: _shadable
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)issueWithShadable:(id)arg0 entryPoint:(id)arg1 effectiveModifier:(id)arg2 message:(id)arg3 line:(NSInteger)arg4 type:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif