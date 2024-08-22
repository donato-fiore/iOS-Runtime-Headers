// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPBAUTOMATORWORKFLOWMIGRATIONERROREVENT_H
#define WFPBAUTOMATORWORKFLOWMIGRATIONERROREVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAutomatorWorkflowMigrationErrorEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *automatorActionIdentifier; // ivar: _automatorActionIdentifier
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) BOOL hasAutomatorActionIdentifier;
@property (readonly, nonatomic) BOOL hasErrorDescription;
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