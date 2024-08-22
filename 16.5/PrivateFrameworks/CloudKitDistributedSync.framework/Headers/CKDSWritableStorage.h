// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSWRITABLESTORAGE_H
#define CKDSWRITABLESTORAGE_H

@class NSMutableData;


#import "CKDSStorage.h"

@interface CKDSWritableStorage : CKDSStorage

@property (readonly, nonatomic) NSMutableData *data;


-(id)initInMemory;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithTemporaryFile:(*id)arg0 ;
-(id)readableStorage;


@end


#endif