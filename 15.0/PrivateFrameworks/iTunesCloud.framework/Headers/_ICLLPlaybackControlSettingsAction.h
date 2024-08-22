// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLLPLAYBACKCONTROLSETTINGSACTION_H
#define _ICLLPLAYBACKCONTROLSETTINGSACTION_H

@class PBCodable;
@protocol NSCopying;


#import "_ICLLPlaybackControlSettings.h"

@interface _ICLLPlaybackControlSettingsAction : PBCodable <NSCopying>

 {
    _ICLLPlaybackControlSettings *_settings;
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