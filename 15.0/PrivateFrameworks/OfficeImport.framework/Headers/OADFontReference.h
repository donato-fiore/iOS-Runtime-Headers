// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADFONTREFERENCE_H
#define OADFONTREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADColor.h"

@interface OADFontReference : NSObject <NSCopying>

 {
    int mIndex;
    OADColor *mColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(int)index;
-(void)applyToParagraphProperties:(id)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setIndex:(int)arg0 ;


@end


#endif