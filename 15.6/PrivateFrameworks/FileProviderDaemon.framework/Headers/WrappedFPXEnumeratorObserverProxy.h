// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WRAPPEDFPXENUMERATOROBSERVERPROXY_H
#define WRAPPEDFPXENUMERATOROBSERVERPROXY_H

@class NSString;
@protocol FPXEnumeratorObserver;

#import <Foundation/Foundation.h>


@interface WrappedFPXEnumeratorObserverProxy : NSObject <FPXEnumeratorObserver>

 {
    id<FPXEnumeratorObserver> *_target;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTarget:(id)arg0 ;
-(void)didUpdateItem:(id)arg0 ;
-(void)enumerationResultsDidChange;


@end


#endif