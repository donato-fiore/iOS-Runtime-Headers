// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFIMAPCOMPOUNDDOWNLOAD_H
#define MFIMAPCOMPOUNDDOWNLOAD_H

@class NSMutableArray;


#import "MFIMAPDownload.h"

@interface MFIMAPCompoundDownload : MFIMAPDownload {
    NSMutableArray *_subdownloads;
}




-(BOOL)isComplete;
-(NSUInteger)bytesFetched;
-(NSUInteger)expectedLength;
-(NSUInteger)lengthOfDataBeforeLineConversion;
-(id)subdownloads;
-(void)addCommandsToPipeline:(id)arg0 withCache:(id)arg1 ;
-(void)addSubdownload:(id)arg0 ;
-(void)dealloc;
-(void)processResults;
-(void)removeSubdownload:(id)arg0 ;


@end


#endif