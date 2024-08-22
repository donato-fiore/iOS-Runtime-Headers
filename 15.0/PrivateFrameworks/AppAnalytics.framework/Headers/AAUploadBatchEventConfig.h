// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUPLOADBATCHEVENTCONFIG_H
#define AAUPLOADBATCHEVENTCONFIG_H


#import <Foundation/Foundation.h>


@interface AAUploadBatchEventConfig : NSObject

@property (nonatomic, readonly) BOOL debuggingEnabled; // ivar: debuggingEnabled
@property (nonatomic, readonly) NSInteger maxByteSizePerSessionBatch; // ivar: maxByteSizePerSessionBatch
@property (nonatomic, readonly) NSInteger maxEventsPerSessionBatch; // ivar: maxEventsPerSessionBatch
@property (nonatomic, readonly) NSInteger maxUploadTries; // ivar: maxUploadTries


+(id)default;
-(id)init;
-(id)initWithBatchSize:(NSInteger)arg0 enableDebugging:(BOOL)arg1 ;
-(id)withDebuggingEnabled:(BOOL)arg0 ;
-(id)withMaxByteSizePerSessionBatch:(NSInteger)arg0 ;
-(id)withMaxEventsPerSessionBatch:(NSInteger)arg0 ;
-(id)withMaxUploadTries:(NSInteger)arg0 ;


@end


#endif