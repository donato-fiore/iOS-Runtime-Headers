// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCLOADABLEFONT_H
#define FCLOADABLEFONT_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCLoadableFont : NSObject <NSCopying>



@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (retain, nonatomic) NSURL *fontURL; // ivar: _fontURL


+(id)loadableFontWithName:(id)arg0 url:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif