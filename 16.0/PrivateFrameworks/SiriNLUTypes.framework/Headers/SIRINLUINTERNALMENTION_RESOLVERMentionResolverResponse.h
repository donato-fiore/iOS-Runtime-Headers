// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALMENTION_RESOLVERMENTIONRESOLVERRESPONSE_H
#define SIRINLUINTERNALMENTION_RESOLVERMENTIONRESOLVERRESPONSE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) NSMutableArray *mentions; // ivar: _mentions
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mentionsAtIndex:(NSUInteger)arg0 ;
-(void)addMentions:(id)arg0 ;
-(void)clearMentions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif