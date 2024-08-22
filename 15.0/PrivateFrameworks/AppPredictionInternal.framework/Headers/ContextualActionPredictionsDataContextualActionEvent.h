// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTEXTUALACTIONPREDICTIONSDATACONTEXTUALACTIONEVENT_H
#define CONTEXTUALACTIONPREDICTIONSDATACONTEXTUALACTIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ContextualActionPredictionsDataContextFeatures.h"

@interface ContextualActionPredictionsDataContextualActionEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) NSString *actionName; // ivar: _actionName
@property (retain, nonatomic) NSMutableArray *commonFileFeatures; // ivar: _commonFileFeatures
@property (retain, nonatomic) ContextualActionPredictionsDataContextFeatures *contextFeatures; // ivar: _contextFeatures
@property (readonly, nonatomic) BOOL hasContextFeatures;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSMutableArray *photoFeatures; // ivar: _photoFeatures
@property (retain, nonatomic) NSMutableArray *previousActionIdentifiers; // ivar: _previousActionIdentifiers
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (retain, nonatomic) NSString *sourceAppBundleID; // ivar: _sourceAppBundleID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)commonFileFeaturesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)photoFeaturesAtIndex:(NSUInteger)arg0 ;
-(id)previousActionIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addCommonFileFeatures:(id)arg0 ;
-(void)addPhotoFeatures:(id)arg0 ;
-(void)addPreviousActionIdentifiers:(id)arg0 ;
-(void)clearCommonFileFeatures;
-(void)clearPhotoFeatures;
-(void)clearPreviousActionIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif