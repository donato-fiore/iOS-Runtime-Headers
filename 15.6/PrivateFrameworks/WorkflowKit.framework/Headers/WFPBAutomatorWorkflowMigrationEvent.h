// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPBAUTOMATORWORKFLOWMIGRATIONEVENT_H
#define WFPBAUTOMATORWORKFLOWMIGRATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAutomatorWorkflowMigrationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int automatorActionCount; // ivar: _automatorActionCount
@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL hasAutomatorActionCount;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif