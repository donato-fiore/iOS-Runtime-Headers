// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPRESOLVER_H
#define NPRESOLVER_H

@class NWResolver;
@protocol OS_dispatch_source;



@interface NPResolver : NWResolver

@property (copy) id *resolveCompletionHandler; // ivar: _resolveCompletionHandler
@property (retain) NSObject<OS_dispatch_source> *resolveTimer; // ivar: _resolveTimer


-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resolveWithCompletionHandler:(id)arg0 ;


@end


#endif