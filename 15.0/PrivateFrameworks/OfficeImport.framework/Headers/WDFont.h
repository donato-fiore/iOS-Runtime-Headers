// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDFONT_H
#define WDFONT_H

@class NSString, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WDFont : NSObject <NSCopying>

 {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}




+(int)cpFontClassFromWdFontFamily:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)alternateNames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)name;
-(id)secondName;
-(int)characterSet;
-(int)fontFamily;
-(int)pitch;
-(void)addAlternateName:(id)arg0 ;
-(void)setCharacterSet:(int)arg0 ;
-(void)setFontFamily:(int)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setPitch:(int)arg0 ;


@end


#endif