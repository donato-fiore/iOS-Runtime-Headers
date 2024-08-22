// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUPLOADBATCHEVENTPROCESSOR_H
#define AAUPLOADBATCHEVENTPROCESSOR_H

@protocol AAEventProcessorType;

#import <Foundation/Foundation.h>


@interface AAUploadBatchEventProcessor : NSObject <AAEventProcessorType>

 {
    ? proxyEventProcessor;
}




-(id)init;
-(id)initWithClient:(id)arg0 endpoint:(id)arg1 ;
-(id)initWithClient:(id)arg0 endpoint:(id)arg1 config:(id)arg2 ;
-(id)initWithClient:(id)arg0 endpoint:(id)arg1 contentType:(NSInteger)arg2 config:(id)arg3 ;
-(void)processEvent:(id)arg0 ;


@end


#endif