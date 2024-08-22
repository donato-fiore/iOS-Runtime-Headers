// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBUFFERINGSTRUCTUREDATAFILTER_H
#define HMDBUFFERINGSTRUCTUREDATAFILTER_H



#import "HMDStructuredDataFoundationWriter.h"
#import "HMDStructuredWriter.h"

@interface HMDBufferingStructureDataFilter : HMDStructuredDataFoundationWriter {
    HMDStructuredWriter *_writer;
    id *_block;
}




-(id)error;
-(id)initWithUnderlyingWriter:(id)arg0 block:(id)arg1 ;
-(void)emitRootValue:(id)arg0 ;
-(void)failWithError:(id)arg0 ;


@end


#endif