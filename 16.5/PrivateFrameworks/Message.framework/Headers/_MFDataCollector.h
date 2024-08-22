// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFDATACOLLECTOR_H
#define _MFDATACOLLECTOR_H

@class MFBufferedDataConsumer, NSString;
@protocol MFGuaranteedCollectingDataConsumer;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"
#import "MFLibraryMessage.h"
#import "MFFileCompressionQueue.h"

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer>

 {
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    MFFileCompressionQueue *_compressionQueue;
    NSString *_part;
    BOOL _partial;
    BOOL _incomplete;
    BOOL _relaxDataProtection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(id)initWithLibrary:(id)arg0 message:(id)arg1 part:(id)arg2 partial:(BOOL)arg3 incomplete:(BOOL)arg4 relaxDataProtection:(BOOL)arg5 compressionQueue:(id)arg6 ;
-(id)pathForStorage;
-(void)done;


@end


#endif