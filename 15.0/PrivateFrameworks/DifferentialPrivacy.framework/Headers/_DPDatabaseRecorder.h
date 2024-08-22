// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPDATABASERECORDER_H
#define _DPDATABASERECORDER_H

@class DPDataRecorder, NSSet;


#import "_DPStorage.h"

@interface _DPDatabaseRecorder : DPDataRecorder

@property (readonly, nonatomic) NSSet *blacklistSet; // ivar: _blacklistSet
@property (readonly, nonatomic) _DPStorage *db; // ivar: _db
@property (readonly, nonatomic) NSUInteger puzzlePieceCount; // ivar: _puzzlePieceCount


-(BOOL)isMetadataValid:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithKey:(id)arg0 storage:(id)arg1 ;
-(id)initWithKey:(id)arg0 storage:(id)arg1 systemBlacklistPath:(id)arg2 runtimeBlacklistPath:(id)arg3 ;
-(void)directUploadRecords:(id)arg0 forKey:(id)arg1 ;
-(void)recordBitValues:(id)arg0 ;
-(void)recordBitValues:(id)arg0 metadata:(id)arg1 ;
-(void)recordBitVectors:(id)arg0 ;
-(void)recordBitVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordFloatVectors:(id)arg0 ;
-(void)recordFloatVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordNumbers:(id)arg0 ;
-(void)recordNumbers:(id)arg0 metadata:(id)arg1 ;
-(void)recordStrings:(id)arg0 ;
-(void)recordStrings:(id)arg0 metadata:(id)arg1 ;
-(void)recordWords:(id)arg0 ;


@end


#endif