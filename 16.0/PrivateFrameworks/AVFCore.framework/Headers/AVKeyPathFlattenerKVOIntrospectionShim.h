// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVKEYPATHFLATTENERKVOINTROSPECTIONSHIM_H
#define AVKEYPATHFLATTENERKVOINTROSPECTIONSHIM_H

@class NSString;
@protocol AVKVOIntrospection, AVCallbackCancellation, AVKVOIntrospection><AVCallbackCancellation;

#import <Foundation/Foundation.h>


@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation>

 {
    NSObject *_observedObject;
    id<AVKVOIntrospection><AVCallbackCancellation> *_realNotifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly) Class superclass;


-(id)initWithObservedObject:(id)arg0 realNotifier:(id)arg1 ;
-(void)cancelCallbacks;
-(void)dealloc;


@end


#endif