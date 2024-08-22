// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUPLOADBATCHEVENTCONFIG_H
#define AAUPLOADBATCHEVENTCONFIG_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface AAUploadBatchEventConfig : NSObject {
    ? directory;
}


@property (nonatomic, readonly) BOOL debuggingEnabled; // ivar: debuggingEnabled
@property (nonatomic, readonly) NSURL *directory;
@property (nonatomic, readonly) NSInteger maxByteSizePerSessionBatch; // ivar: maxByteSizePerSessionBatch
@property (nonatomic, readonly) NSInteger maxEventsPerSessionBatch; // ivar: maxEventsPerSessionBatch
@property (nonatomic, readonly) NSInteger maxUploadTries; // ivar: maxUploadTries


+(id)default;
-(id)init;
-(id)initWithBatchSize:(NSInteger)arg0 enableDebugging:(BOOL)arg1 ;
-(id)withDebuggingEnabled:(BOOL)arg0 ;
-(id)withDirectory:(id)arg0 ;
-(id)withMaxByteSizePerSessionBatch:(NSInteger)arg0 ;
-(id)withMaxEventsPerSessionBatch:(NSInteger)arg0 ;
-(id)withMaxUploadTries:(NSInteger)arg0 ;


@end


#endif