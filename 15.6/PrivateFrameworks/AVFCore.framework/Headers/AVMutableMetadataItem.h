// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEMETADATAITEM_H
#define AVMUTABLEMETADATAITEM_H

@class AVMutableMetadataItemInternal, NSString, NSDictionary, NSLocale;
@protocol NSObject><NSCopying;


#import "AVMetadataItem.h"

@interface AVMutableMetadataItem : AVMetadataItem {
    AVMutableMetadataItemInternal *_mutablePriv;
}


@property (copy, nonatomic) NSString *dataType;
@property (nonatomic) ? duration;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) ? time;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *value;


+(id)keyPathsForValuesAffectingIdentifier;
+(id)metadataItem;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)key;
-(id)keySpace;
-(id)languageCode;
-(id)startDate;
-(void)setKey:(id)arg0 ;
-(void)setKeySpace:(id)arg0 ;
-(void)setStartDate:(id)arg0 ;


@end


#endif