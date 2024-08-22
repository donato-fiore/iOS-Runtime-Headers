// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSTYLE_H
#define CMSTYLE_H

@class NSMutableDictionary, NSMutableString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CMStyle : NSObject <NSCopying>

 {
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeForName:(id)arg0 ;
-(id)cacheFriendlyCSSStyleString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cssStyleString;
-(id)init;
-(id)initWithStyle:(id)arg0 ;
-(id)properties;
-(id)propertyForName:(id)arg0 ;
-(void)addPropertiesToCSSStyleString:(id)arg0 ;
-(void)addProperty:(id)arg0 forKey:(id)arg1 ;
-(void)appendDefaultBorderStyle;
-(void)appendOriginInfoFromPoint:(struct CGPoint )arg0 ;
-(void)appendPositionInfoFromRect:(struct CGRect )arg0 ;
-(void)appendPropertyForName:(id)arg0 color:(id)arg1 ;
-(void)appendPropertyForName:(id)arg0 floatValue:(float)arg1 ;
-(void)appendPropertyForName:(id)arg0 intValue:(int)arg1 ;
-(void)appendPropertyForName:(id)arg0 length:(CGFloat)arg1 unit:(int)arg2 ;
-(void)appendPropertyForName:(id)arg0 oadTextSpacing:(id)arg1 ;
-(void)appendPropertyForName:(id)arg0 oadTextSpacing:(id)arg1 lineHeight:(float)arg2 unit:(int)arg3 ;
-(void)appendPropertyForName:(id)arg0 oadTextSpacing:(id)arg1 unit:(int)arg2 ;
-(void)appendPropertyForName:(id)arg0 stringValue:(id)arg1 ;
-(void)appendPropertyForName:(id)arg0 stringWithColons:(id)arg1 ;
-(void)appendPropertyString:(id)arg0 ;
-(void)appendSizeInfoFromRect:(struct CGRect )arg0 ;


@end


#endif