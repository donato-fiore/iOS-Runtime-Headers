// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICJSSIGNCONFIGURATION_H
#define ICJSSIGNCONFIGURATION_H

@class NSMutableArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICJSSignConfiguration : NSObject <NSCopying>

 {
    NSMutableArray *_componentNames;
    NSMutableArray *_components;
}


@property (copy, nonatomic) NSString *signatureDataCookieName; // ivar: _signatureDataCookieName
@property (copy, nonatomic) NSString *signatureDataHeaderName; // ivar: _signatureDataHeaderName


+(id)storePlatformConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_addRequestComponent:(NSInteger)arg0 withName:(id)arg1 ;
-(void)_enumerateComponentsUsingBlock:(id)arg0 ;
-(void)includeCookieWithName:(id)arg0 ;
-(void)includeHeaderWithName:(id)arg0 ;
-(void)includeQueryItemWithName:(id)arg0 ;


@end


#endif