// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALSQLCONTEXTROWITEM_H
#define HMBLOCALSQLCONTEXTROWITEM_H

@class HMFObject, NSData;



@interface HMBLocalSQLContextRowItem : HMFObject

@property (readonly, nonatomic) NSData *externalData; // ivar: _externalData
@property (readonly, nonatomic) NSData *externalID; // ivar: _externalID
@property (readonly, nonatomic) NSUInteger itemRow; // ivar: _itemRow
@property (readonly, nonatomic) NSData *modelData; // ivar: _modelData
@property (readonly, nonatomic) NSUInteger modelEncoding; // ivar: _modelEncoding


-(id)description;
-(id)initWithItemRow:(NSUInteger)arg0 externalID:(id)arg1 externalData:(id)arg2 modelEncoding:(NSUInteger)arg3 modelData:(id)arg4 ;
-(id)initWithStatement:(struct sqlite3_stmt *)arg0 returning:(NSUInteger)arg1 ;


@end


#endif