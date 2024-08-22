// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFBLOCKDATACONSUMER_H
#define MFBLOCKDATACONSUMER_H

@class NSString;
@protocol MFDataConsumer;

#import <Foundation/Foundation.h>


@interface MFBlockDataConsumer : NSObject <MFDataConsumer>

 {
    id *_appendHandler;
    id *_doneHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
// -(id)initWithAppendHandler:(id)arg0 doneHandler:(unk)arg1  ;
-(void)done;


@end


#endif