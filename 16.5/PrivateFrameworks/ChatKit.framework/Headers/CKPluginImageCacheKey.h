// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPLUGINIMAGECACHEKEY_H
#define CKPLUGINIMAGECACHEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKPluginImageCacheKey : NSObject

@property (nonatomic) NSInteger integerIdentifier; // ivar: _integerIdentifier
@property (retain, nonatomic) NSString *stringIdentifier; // ivar: _stringIdentifier


+(id)keyWithStringIdentifier:(id)arg0 integerIdentifier:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithStringIdentifier:(id)arg0 integerIdentifier:(NSInteger)arg1 ;


@end


#endif