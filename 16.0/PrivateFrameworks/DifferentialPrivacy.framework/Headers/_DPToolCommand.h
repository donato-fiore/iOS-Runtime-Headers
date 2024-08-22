// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPTOOLCOMMAND_H
#define _DPTOOLCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_DPStorage.h"

@interface _DPToolCommand : NSObject

@property (readonly, copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (readonly, copy, nonatomic) NSString *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *recordKey; // ivar: _recordKey
@property (readonly, nonatomic) _DPStorage *storage; // ivar: _storage
@property (readonly, nonatomic) BOOL writeOK; // ivar: _writeOK


+(id)command:(id)arg0 arguments:(id)arg1 metadata:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
+(id)supportedCommands;
+(id)supportedMetadataKeys;
-(BOOL)executeCommand;
-(BOOL)listKeys;
-(BOOL)listReportsFor:(id)arg0 ;
-(BOOL)recordBitValues:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordBitVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordFloatVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordNumbers:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordNumbersVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordStrings:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordWords:(id)arg0 forKey:(id)arg1 ;
-(BOOL)submitRecordsForKey:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAction:(id)arg0 arguments:(id)arg1 metadata:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5 ;
-(id)queryForKey:(id)arg0 ;


@end


#endif