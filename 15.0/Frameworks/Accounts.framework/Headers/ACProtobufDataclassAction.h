// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPROTOBUFDATACLASSACTION_H
#define ACPROTOBUFDATACLASSACTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ACProtobufDataclassAction : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *affectedContainers; // ivar: _affectedContainers
@property (nonatomic) BOOL destructive; // ivar: _destructive
@property (readonly, nonatomic) BOOL hasUndoAlertMessage;
@property (readonly, nonatomic) BOOL hasUndoAlertTitle;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *undoAlertMessage; // ivar: _undoAlertMessage
@property (retain, nonatomic) NSString *undoAlertTitle; // ivar: _undoAlertTitle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)affectedContainersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAffectedContainers:(id)arg0 ;
-(void)clearAffectedContainers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif