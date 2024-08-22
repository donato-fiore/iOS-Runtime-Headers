// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPDATADETECTORSPAN_H
#define UPDATADETECTORSPAN_H

@class USOSerializedGraph;


#import "UPSpan.h"

@interface UPDataDetectorSpan : UPSpan

@property (readonly) *__DDResult dataDetectorResult; // ivar: _dataDetectorResult
@property (readonly) USOSerializedGraph *usoGraph; // ivar: _usoGraph


-(id)getUsoGraphPrintedForm;
-(id)initWithRange:(struct _NSRange )arg0 category:(id)arg1 dataDetectorResult:(struct __DDResult *)arg2 ;
-(id)initWithRange:(struct _NSRange )arg0 category:(id)arg1 dataDetectorResult:(struct __DDResult *)arg2 usoGraph:(id)arg3 ;


@end


#endif