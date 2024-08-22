// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMBIOMETABLESTORE_H
#define BMBIOMETABLESTORE_H

@class NSString, BMTableStore;
@protocol BMTableQuery;

#import <Foundation/Foundation.h>


@interface BMBiomeTableStore : NSObject <BMTableQuery>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName
@property (retain, nonatomic) BMTableStore *tableStore; // ivar: _tableStore


-(id)initWithIdentifier:(id)arg0 tableName:(id)arg1 ;
-(id)initWithURL:(id)arg0 tableName:(id)arg1 identifier:(id)arg2 ;
-(id)select:(id)arg0 ;
-(id)selectTableNamed:(id)arg0 ;


@end


#endif