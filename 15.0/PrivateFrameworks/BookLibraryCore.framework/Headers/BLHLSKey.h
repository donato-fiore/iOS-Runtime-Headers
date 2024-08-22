// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLHLSKEY_H
#define BLHLSKEY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface BLHLSKey : NSObject

@property (readonly, nonatomic) NSString *iv; // ivar: _iv
@property (readonly, nonatomic) NSString *keyFormat; // ivar: _keyFormat
@property (readonly, nonatomic) NSString *keyFormatVersions; // ivar: _keyFormatVersions
@property (readonly, nonatomic) NSInteger method; // ivar: _method
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHLSKey:(id)arg0 ;
-(BOOL)isFormatSupported;
-(NSUInteger)hash;
-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg0 ;


@end


#endif