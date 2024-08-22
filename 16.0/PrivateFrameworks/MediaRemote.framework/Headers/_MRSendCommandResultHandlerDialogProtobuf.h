// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRSENDCOMMANDRESULTHANDLERDIALOGPROTOBUF_H
#define _MRSENDCOMMANDRESULTHANDLERDIALOGPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL hasLocalizedMessage;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addActions:(id)arg0 ;
-(void)clearActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif