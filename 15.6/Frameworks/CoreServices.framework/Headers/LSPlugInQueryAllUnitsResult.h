// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSPLUGINQUERYALLUNITSRESULT_H
#define LSPLUGINQUERYALLUNITSRESULT_H

@class LSQueryResult, NSUUID, NSArray;



@interface LSPlugInQueryAllUnitsResult : LSQueryResult

@property (readonly, nonatomic) NSUUID *dbUUID; // ivar: _dbUUID
@property (readonly, nonatomic) NSArray *pluginUnits; // ivar: _pluginUnits


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlugInUnits:(id)arg0 forDatabaseWithUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif