// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFIMAPSIMPLEDOWNLOAD_H
#define MFIMAPSIMPLEDOWNLOAD_H

@class NSString, NSError;


#import "MFIMAPDownload.h"

@interface MFIMAPSimpleDownload : MFIMAPDownload {
    NSString *_section;
    NSError *_error;
    NSUInteger _length;
    NSUInteger _lastBytesFetched;
    BOOL _knownLength;
    BOOL _complete;
    _NSRange _range;
    NSUInteger _originalDataLength;
    NSUInteger _offsetAdjustment;
}




-(BOOL)isComplete;
-(BOOL)isSuccessful;
-(NSUInteger)bytesFetched;
-(NSUInteger)expectedLength;
-(NSUInteger)lengthOfDataBeforeLineConversion;
-(id)error;
-(id)initWithUid:(unsigned int)arg0 section:(id)arg1 estimatedLength:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)initWithUid:(unsigned int)arg0 section:(id)arg1 length:(NSUInteger)arg2 consumer:(id)arg3 ;
-(id)initWithUid:(unsigned int)arg0 section:(id)arg1 length:(NSUInteger)arg2 lengthIsKnown:(BOOL)arg3 range:(struct _NSRange )arg4 consumer:(id)arg5 ;
-(id)initWithUid:(unsigned int)arg0 section:(id)arg1 range:(struct _NSRange )arg2 consumer:(id)arg3 ;
-(id)section;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)handleFetchResult:(id)arg0 ;
-(void)processResults;
-(void)setError:(id)arg0 ;


@end


#endif