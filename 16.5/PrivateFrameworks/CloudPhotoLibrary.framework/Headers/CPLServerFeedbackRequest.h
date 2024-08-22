// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSERVERFEEDBACKREQUEST_H
#define CPLSERVERFEEDBACKREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface CPLServerFeedbackRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *messages; // ivar: _messages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messagesAtIndex:(NSUInteger)arg0 ;
-(void)addMessages:(id)arg0 ;
-(void)clearMessages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif