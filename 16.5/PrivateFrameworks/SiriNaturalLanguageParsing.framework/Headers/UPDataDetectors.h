// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPDATADETECTORS_H
#define UPDATADETECTORS_H


#import <Foundation/Foundation.h>


@interface UPDataDetectors : NSObject

@property (readonly) *UPDataDetector dataDetector; // ivar: _dataDetector
@property (readonly) *void ddUsoMapper; // ivar: _ddUsoMapper


-(id)_matchSpansForDetectedDataArray:(struct __CFArray *)arg0 label:(id)arg1 ;
-(id)initLoadFromDataDetectorsDirectoryPath:(id)arg0 forLocale:(id)arg1 ;
-(id)matchSpans:(id)arg0 ;
-(id)matchSpansForDetectedData:(id)arg0 ;
-(id)matchSpansForUtterance:(id)arg0 ;
-(void)dealloc;


@end


#endif