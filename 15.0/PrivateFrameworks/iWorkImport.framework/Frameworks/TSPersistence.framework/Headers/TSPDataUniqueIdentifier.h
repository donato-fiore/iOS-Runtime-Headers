// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATAUNIQUEIDENTIFIER_H
#define TSPDATAUNIQUEIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSPDigest.h"

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) TSPDigest *digest; // ivar: _digest
@property (readonly, nonatomic) NSString *digestString;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDigest:(id)arg0 ;


@end


#endif