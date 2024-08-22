// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOHANDLEAPPLETSTATECHANGEREQUEST_H
#define NPKPROTOHANDLEAPPLETSTATECHANGEREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKProtoHandleAppletStateChangeRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasPassAppletState;
@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSData *passAppletState; // ivar: _passAppletState
@property (retain, nonatomic) NSString *passID; // ivar: _passID


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