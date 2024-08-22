// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKLOCALE_H
#define WLKLOCALE_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface WLKLocale : NSObject

@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif