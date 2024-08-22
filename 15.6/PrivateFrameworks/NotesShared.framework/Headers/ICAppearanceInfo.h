// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAPPEARANCEINFO_H
#define ICAPPEARANCEINFO_H


#import <Foundation/Foundation.h>


@interface ICAppearanceInfo : NSObject

@property (readonly, nonatomic) BOOL isDark;
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)appearanceInfoWithType:(NSUInteger)arg0 ;
+(void)enumerateAppearanceTypesUsingBlock:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif