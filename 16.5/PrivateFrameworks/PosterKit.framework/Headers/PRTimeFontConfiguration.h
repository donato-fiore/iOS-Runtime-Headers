// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRTIMEFONTCONFIGURATION_H
#define PRTIMEFONTCONFIGURATION_H

@class UIFont, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PRTimeFontConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) UIFont *customFont; // ivar: _customFont
@property (readonly, copy, nonatomic) NSString *timeFontIdentifier; // ivar: _timeFontIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCustomFont:(id)arg0 ;
-(id)initWithTimeFontIdentifier:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif