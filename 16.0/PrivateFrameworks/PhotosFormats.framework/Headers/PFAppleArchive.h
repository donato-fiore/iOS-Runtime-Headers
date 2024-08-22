// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAPPLEARCHIVE_H
#define PFAPPLEARCHIVE_H



#import "PFAppleArchiveStream.h"

@interface PFAppleArchive : PFAppleArchiveStream {
    *AAArchiveStream_impl _archiveStream;
}




-(BOOL)close:(*id)arg0 ;
-(BOOL)decodeData:(*id)arg0 filename:(*id)arg1 error:(*id)arg2 ;
-(BOOL)encodeData:(id)arg0 filename:(id)arg1 error:(*id)arg2 ;
-(BOOL)openForReading:(*id)arg0 ;
-(BOOL)openForWriting:(*id)arg0 ;
-(void)dealloc;


@end


#endif