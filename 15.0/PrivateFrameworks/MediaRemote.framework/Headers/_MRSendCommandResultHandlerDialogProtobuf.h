// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRSENDCOMMANDRESULTHANDLERDIALOGPROTOBUF_H
#define _MRSENDCOMMANDRESULTHANDLERDIALOGPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying>

 {
    NSMutableArray *_actions;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif