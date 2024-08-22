// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBCONTEXTUALACTIONEVENT_H
#define BMPBCONTEXTUALACTIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBContextualActionEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionName; // ivar: _actionName
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSMutableArray *contents; // ivar: _contents
@property (readonly, nonatomic) BOOL hasActionName;
@property (readonly, nonatomic) BOOL hasAppName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *parameters; // ivar: _parameters


+(Class)contentType;
+(Class)parameterType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parameterAtIndex:(NSUInteger)arg0 ;
-(void)addContent:(id)arg0 ;
-(void)addParameter:(id)arg0 ;
-(void)clearContents;
-(void)clearParameters;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif