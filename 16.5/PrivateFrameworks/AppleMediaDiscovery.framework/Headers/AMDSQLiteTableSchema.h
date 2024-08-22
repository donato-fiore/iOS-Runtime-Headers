// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSQLITETABLESCHEMA_H
#define AMDSQLITETABLESCHEMA_H

@class NSDictionary, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface AMDSQLiteTableSchema : NSObject

@property (retain, nonatomic) NSDictionary *columns; // ivar: _columns
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *requiredColumns; // ivar: _requiredColumns


-(id)getColumns;
-(id)getCreateTableStatement;
-(id)getInsertStatement:(id)arg0 ;
-(id)getRequiredColumns;
-(id)getSpecForColumn:(id)arg0 ;
-(id)initWithDict:(id)arg0 withName:(id)arg1 error:(*id)arg2 ;


@end


#endif