// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRXPCSYNCPROXY_H
#define BRXPCSYNCPROXY_H

@class NSProxy, NSError;

#import <Foundation/Foundation.h>


@interface BRXPCSyncProxy : NSProxy {
    NSObject *_target;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) id *result; // ivar: _result


-(id)initWithXPCObject:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)setBoolResult:(BOOL)arg0 error:(id)arg1 ;
-(void)setObjResult:(id)arg0 error:(id)arg1 ;


@end


#endif