// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHAZAMKEY_H
#define SHSHAZAMKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SHShazamKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *validatedKey; // ivar: _validatedKey


-(BOOL)isShazamKeyValid:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif