// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6KTRACE12PROVIDERLIST_H
#define _TTC6KTRACE12PROVIDERLIST_H


#import <Foundation/Foundation.h>


@interface _TtC6ktrace12ProviderList : NSObject {
    ? providers;
    ? machine;
}




-(?)describeWithChunk;
-(BOOL)addWithName:(id)arg0 options:(id)arg1 logger:(id)arg2 flags:(unsigned int)arg3 ;
-(BOOL)containsWithName:(id)arg0 ;
-(BOOL)shouldStartTracingWithConfiguration:(struct ktrace_config *)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMachine:(struct ktrace_machine *)arg0 ;
-(void)configurePostprocessingWithSession:(*void)arg0 ;
-(void)configureWithSession:(*void)arg0 ;
-(void)didEndTracingWithFile:(*void)arg0 ;
-(void)didStartTracingWithFile:(*void)arg0 ;
-(void)postprocessingCompleteWithFile:(*void)arg0 ;
-(void)willEndTracingWithFile:(*void)arg0 ;
-(void)willFinishWithCatalog:(*void)arg0 file:(*void)arg1 ;
-(void)willStartTracingWithFile:(*void)arg0 ;


@end


#endif