// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPFONT_H
#define TSWPFONT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPFont : NSObject {
    NSString *_displayName;
    NSString *_familyName;
    NSUInteger _hash;
}


@property (copy, nonatomic) NSString *compatibilityName; // ivar: _compatibilityName
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName


+(BOOL)isKeyValueProxyLeafType;
+(id)fontWithName:(id)arg0 ;
+(id)fontWithName:(id)arg0 compatibilityName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFontName:(id)arg0 ;
-(id)initWithFontName:(id)arg0 compatibilityName:(id)arg1 ;
-(void)dealloc;


@end


#endif