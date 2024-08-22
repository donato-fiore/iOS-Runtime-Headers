// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYOUTPUTSTREAMTRANSACTION_H
#define SYOUTPUTSTREAMTRANSACTION_H

@class NSString, NSURL, NSDictionary, NSOutputStream, NSProgress;
@protocol SYStreamTransaction;

#import <Foundation/Foundation.h>


@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _stream
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)prepare:(*id)arg0 ;
-(id)finalizeOutput:(*id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(void)dealloc;


@end


#endif