// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUNAVIGATIONMENUITEM_H
#define SUNAVIGATIONMENUITEM_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUItemContentRating.h"

@interface SUNavigationMenuItem : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) SUItemContentRating *contentRating; // ivar: _contentRating
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif