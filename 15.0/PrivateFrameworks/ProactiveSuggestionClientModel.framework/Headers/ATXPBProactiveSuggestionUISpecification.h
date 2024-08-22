// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBPROACTIVESUGGESTIONUISPECIFICATION_H
#define ATXPBPROACTIVESUGGESTIONUISPECIFICATION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowedOnHomeScreen; // ivar: _allowedOnHomeScreen
@property (nonatomic) BOOL allowedOnLockscreen; // ivar: _allowedOnLockscreen
@property (nonatomic) BOOL allowedOnSpotlight; // ivar: _allowedOnSpotlight
@property (nonatomic) BOOL hasAllowedOnHomeScreen;
@property (nonatomic) BOOL hasAllowedOnLockscreen;
@property (nonatomic) BOOL hasAllowedOnSpotlight;
@property (readonly, nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasShouldClearOnEngagement;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSMutableArray *preferredLayoutConfigs; // ivar: _preferredLayoutConfigs
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldClearOnEngagement; // ivar: _shouldClearOnEngagement
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)preferredLayoutConfigsAtIndex:(NSUInteger)arg0 ;
-(void)addPreferredLayoutConfigs:(id)arg0 ;
-(void)clearPreferredLayoutConfigs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif