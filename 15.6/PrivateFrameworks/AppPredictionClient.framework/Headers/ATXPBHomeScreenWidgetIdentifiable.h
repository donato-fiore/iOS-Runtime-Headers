// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBHOMESCREENWIDGETIDENTIFIABLE_H
#define ATXPBHOMESCREENWIDGETIDENTIFIABLE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) NSString *extensionBundleId; // ivar: _extensionBundleId
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (readonly, nonatomic) BOOL hasExtensionBundleId;
@property (readonly, nonatomic) BOOL hasIntent;
@property (nonatomic) BOOL hasOnboardingWidget;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasSuggestedWidget;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSData *intent; // ivar: _intent
@property (nonatomic) BOOL onboardingWidget; // ivar: _onboardingWidget
@property (nonatomic) int size; // ivar: _size
@property (nonatomic) BOOL suggestedWidget; // ivar: _suggestedWidget
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind
@property (retain, nonatomic) NSString *widgetUniqueId; // ivar: _widgetUniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sizeAsString:(int)arg0 ;
-(int)StringAsSize:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif