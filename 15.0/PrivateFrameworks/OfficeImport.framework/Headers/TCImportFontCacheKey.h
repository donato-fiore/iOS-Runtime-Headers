// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCIMPORTFONTCACHEKEY_H
#define TCIMPORTFONTCACHEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCImportFontCacheKey : NSObject

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int size; // ivar: _size


+(id)createFontCacheKeyForName:(id)arg0 size:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif