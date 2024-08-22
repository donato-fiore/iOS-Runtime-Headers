// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWRECORDSCHEMA_H
#define SCWRECORDSCHEMA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SCWRecordSchema : NSObject

@property (readonly, copy, nonatomic) NSArray *fieldNames;
@property (readonly, copy, nonatomic) NSArray *fieldSchemas; // ivar: _fieldSchemas
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType


-(BOOL)isValidRecord:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 fieldSchemas:(id)arg1 ;
-(id)schemaForFieldName:(id)arg0 ;


@end


#endif