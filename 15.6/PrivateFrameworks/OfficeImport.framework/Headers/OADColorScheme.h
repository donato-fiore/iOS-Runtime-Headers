// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADCOLORSCHEME_H
#define OADCOLORSCHEME_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADColorScheme : NSObject <NSCopying>

 {
    NSMutableDictionary *mColors;
}


@property (copy, nonatomic) NSString *name; // ivar: mName


-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)colorCount;
-(NSUInteger)hash;
-(id)colorForIndex:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addColor:(id)arg0 index:(int)arg1 ;
-(void)setColor:(id)arg0 index:(int)arg1 ;
-(void)validateColorScheme;


@end


#endif