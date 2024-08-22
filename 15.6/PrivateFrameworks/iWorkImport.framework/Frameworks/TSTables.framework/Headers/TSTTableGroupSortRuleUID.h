// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEGROUPSORTRULEUID_H
#define TSTTABLEGROUPSORTRULEUID_H

@class TSKSosBase;



@interface TSTTableGroupSortRuleUID : TSKSosBase {
    UUIDData<TSP::UUIDData> _groupingColumnUID;
    UUIDData<TSP::UUIDData> _columnUID;
    BOOL _definedGroupingColumnUID;
    BOOL _definedColumnUID;
    BOOL _definedDirection;
}


@property (nonatomic) TSKUIDStruct columnUID;
@property (nonatomic) int direction; // ivar: _direction
@property (nonatomic) TSKUIDStruct groupingColumnUID;


+(id)ruleWithGroupingColumnUID:(struct TSKUIDStruct )arg0 columnUID:(struct TSKUIDStruct )arg1 direction:(int)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithGroupingColumnUID:(struct TSKUIDStruct )arg0 columnUID:(struct TSKUIDStruct )arg1 direction:(int)arg2 ;
-(id)ruleByChangingDirectionTo:(int)arg0 ;
-(id)ruleByChangingSummaryColumnTo:(struct TSKUIDStruct )arg0 ;
-(unsigned char)groupLevelInTable:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif