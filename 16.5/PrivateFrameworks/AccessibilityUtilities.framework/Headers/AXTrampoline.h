// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXTRAMPOLINE_H
#define AXTRAMPOLINE_H


#import <Foundation/Foundation.h>


@interface AXTrampoline : NSObject

@property (weak, nonatomic) id *caller; // ivar: _caller
@property (weak, nonatomic) Class targetClass; // ivar: _targetClass
@property (nonatomic) BOOL warnAboutUnknownSelectors; // ivar: _warnAboutUnknownSelectors


+(id)methodNotFoundSentinal;
+(id)trampolineWithCaller:(id)arg0 targetClass:(Class)arg1 ;
+(void)methodDoesNotExistSentinal;
-(*unk)_findIMPForSelector:(SEL)arg0 ;
-(id)description;
-(id)initWithCaller:(id)arg0 targetClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif