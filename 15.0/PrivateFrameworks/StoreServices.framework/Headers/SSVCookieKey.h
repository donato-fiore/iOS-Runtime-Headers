// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVCOOKIEKEY_H
#define SSVCOOKIEKEY_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVCookieKey : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (nonatomic) NSInteger scope; // ivar: _scope


+(id)keyWithIdentifier:(id)arg0 scope:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif