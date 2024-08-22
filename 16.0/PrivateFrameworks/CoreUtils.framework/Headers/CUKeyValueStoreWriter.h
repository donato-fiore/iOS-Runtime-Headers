// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUKEYVALUESTOREWRITER_H
#define CUKEYVALUESTOREWRITER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUKeyValueStoreWriter : NSObject {
    cdb_make _cdb;
    BOOL _cdbStarted;
    NSString *_finalPath;
    int _tempFD;
    char _tempPath;
}




-(BOOL)addKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)finishAndReturnError:(*id)arg0 ;
-(BOOL)startAtPath:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;


@end


#endif