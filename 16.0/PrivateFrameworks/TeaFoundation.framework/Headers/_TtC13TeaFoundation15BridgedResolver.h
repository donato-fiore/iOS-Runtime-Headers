// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TEAFOUNDATION15BRIDGEDRESOLVER_H
#define _TTC13TEAFOUNDATION15BRIDGEDRESOLVER_H

@protocol TFResolver;

#import <Foundation/Foundation.h>


@interface _TtC13TeaFoundation15BridgedResolver : NSObject <TFResolver>

 {
    ? resolver;
}




-(id)currentObjectGraphResolver:(NSUInteger)arg0 ;
-(id)init;
-(id)resolveClass:(Class)arg0 ;
-(id)resolveClass:(Class)arg0 contextBlock:(id)arg1 ;
-(id)resolveClass:(Class)arg0 name:(id)arg1 ;
-(id)resolveClass:(Class)arg0 name:(id)arg1 contextBlock:(id)arg2 ;
-(id)resolveOptionalClass:(Class)arg0 ;
-(id)resolveOptionalClass:(Class)arg0 contextBlock:(id)arg1 ;
-(id)resolveOptionalClass:(Class)arg0 name:(id)arg1 ;
-(id)resolveOptionalClass:(Class)arg0 name:(id)arg1 contextBlock:(id)arg2 ;
-(id)resolveOptionalProtocol:(id)arg0 ;
-(id)resolveOptionalProtocol:(id)arg0 contextBlock:(id)arg1 ;
-(id)resolveOptionalProtocol:(id)arg0 name:(id)arg1 ;
-(id)resolveOptionalProtocol:(id)arg0 name:(id)arg1 contextBlock:(id)arg2 ;
-(id)resolveProtocol:(id)arg0 ;
-(id)resolveProtocol:(id)arg0 contextBlock:(id)arg1 ;
-(id)resolveProtocol:(id)arg0 name:(id)arg1 ;
-(id)resolveProtocol:(id)arg0 name:(id)arg1 contextBlock:(id)arg2 ;


@end


#endif