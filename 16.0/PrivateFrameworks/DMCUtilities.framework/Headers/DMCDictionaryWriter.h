// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCDICTIONARYWRITER_H
#define DMCDICTIONARYWRITER_H

@class NSError, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "DMCFileAccessRepairTool.h"

@interface DMCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *afterWriteRepairError; // ivar: _afterWriteRepairError
@property (copy, nonatomic) NSError *beforeWriteRepairError; // ivar: _beforeWriteRepairError
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) DMCFileAccessRepairTool *repairTool; // ivar: _repairTool
@property (copy, nonatomic) NSError *serializeError; // ivar: _serializeError
@property (copy, nonatomic) NSError *writeError; // ivar: _writeError


-(BOOL)didWriteSucceed;
-(BOOL)repairAccessIfNecessaryWithError:(*id)arg0 ;
-(BOOL)write;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(id)createRepairTool;
-(id)initWithDictionary:(id)arg0 path:(id)arg1 ;
-(id)serializedData;
-(void)logResultOfWrite;
-(void)logStartOfWrite;
-(void)reset;
-(void)serializeDataAndWriteToStorage;


@end


#endif