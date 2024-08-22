// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCCCC7MESSAGE25INPROGRESSMESSAGEDOWNLOAD26ATTACHMENTDECODERANDWRITER7DECODERP33_E488F2EBCE7947B89745EE1E7B527BA212DATACONSUMER_H
#define _TTCCCC7MESSAGE25INPROGRESSMESSAGEDOWNLOAD26ATTACHMENTDECODERANDWRITER7DECODERP33_E488F2EBCE7947B89745EE1E7B527BA212DATACONSUMER_H

@protocol MFDataConsumer;

#import <Foundation/Foundation.h>


@interface _TtCCCC7Message25InProgressMessageDownload26AttachmentDecoderAndWriter7DecoderP33_E488F2EBCE7947B89745EE1E7B527BA212DataConsumer : NSObject <MFDataConsumer>

 {
    ? decoder;
}




-(NSInteger)appendData:(id)arg0 ;
-(id)init;
-(void)done;


@end


#endif