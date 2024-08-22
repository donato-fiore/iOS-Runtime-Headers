// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSQLITEVIRTUALTABLE_H
#define GEOSQLITEVIRTUALTABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GEOSQLiteVirtualTable : NSObject

@property (readonly, nonatomic) NSString *columnDefinitions;
@property (readonly, nonatomic) *sqlite3_module module;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger rowCount;


-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)fetchValueForContext:(struct sqlite3_context *)arg0 row:(NSUInteger)arg1 column:(NSUInteger)arg2 ;


@end


#endif