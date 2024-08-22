// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAXPBCONTEXTUALACTIONSFEEDBACKEVENT_H
#define CAXPBCONTEXTUALACTIONSFEEDBACKEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CAXPBPredictionContext.h"
#import "CAXPBContextualAction.h"
#import "CAXPBSuggestion.h"

@interface CAXPBContextualActionsFeedbackEvent : PBCodable <NSCopying>



@property (retain, nonatomic) CAXPBPredictionContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) BOOL hasDeviceContext;
@property (readonly, nonatomic) BOOL hasSelectedAction;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (readonly, nonatomic) BOOL hasSuggestion;
@property (retain, nonatomic) CAXPBContextualAction *selectedAction; // ivar: _selectedAction
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) CAXPBSuggestion *suggestion; // ivar: _suggestion


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