// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTOKEN_H
#define AKTOKEN_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AKToken : NSObject

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue


+(id)tokenWithBase64String:(id)arg0 ;
+(id)tokenWithDictionary:(id)arg0 ;
+(id)tokenWithValue:(id)arg0 lifetime:(id)arg1 ;


@end


#endif