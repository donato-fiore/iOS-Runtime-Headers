// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALSQLCONTEXTROWRECORD_H
#define HMBLOCALSQLCONTEXTROWRECORD_H

@class HMFObject, NSData, NSUUID, NSString, NSNumber;



@interface HMBLocalSQLContextRowRecord : HMFObject

@property (readonly, nonatomic) NSData *externalData; // ivar: _externalData
@property (readonly, nonatomic) NSData *externalID; // ivar: _externalID
@property (readonly, nonatomic) NSData *modelData; // ivar: _modelData
@property (readonly, nonatomic) NSUInteger modelEncoding; // ivar: _modelEncoding
@property (readonly, nonatomic) NSUUID *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSUUID *modelSchema; // ivar: _modelSchema
@property (readonly, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, nonatomic) NSNumber *pushBlockRow; // ivar: _pushBlockRow
@property (readonly, nonatomic) NSData *pushData; // ivar: _pushData
@property (readonly, nonatomic) NSUInteger pushEncoding; // ivar: _pushEncoding
@property (readonly, nonatomic) NSUInteger recordRow; // ivar: _recordRow


-(id)attributeDescriptions;
-(id)initWithRecordRow:(NSUInteger)arg0 externalID:(id)arg1 externalData:(id)arg2 modelID:(id)arg3 modelEncoding:(NSUInteger)arg4 modelData:(id)arg5 modelSchema:(id)arg6 modelType:(id)arg7 pushEncoding:(NSUInteger)arg8 pushData:(id)arg9 pushBlockRow:(id)arg10 ;
-(id)initWithStatement:(struct sqlite3_stmt *)arg0 returning:(NSUInteger)arg1 ;


@end


#endif