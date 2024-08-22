// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFOLDERSYNCTASK_H
#define ASFOLDERSYNCTASK_H

@class NSString;


#import "ASTask.h"

@interface ASFolderSyncTask : ASTask {
    NSString *_previousSyncKey;
    int _numDownloadedElements;
    BOOL _isSpinning;
}


@property (nonatomic) NSInteger dataclasses; // ivar: _dataclasses
@property (nonatomic) BOOL requireChangedFolders; // ivar: _requireChangedFolders


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)initWithPreviousSyncKey:(id)arg0 ;
-(id)requestBody;
-(int)commandCode;
-(int)numDownloadedElements;
-(void)_setSpinning:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;


@end


#endif