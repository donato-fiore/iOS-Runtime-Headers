// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPOFFLINEADVERTISINGKEYS_H
#define SPOFFLINEADVERTISINGKEYS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPOfflineAdvertisingKeys : NSObject <NSSecureCoding>



@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, nonatomic) NSInteger rotationInterval; // ivar: _rotationInterval


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(NSInteger)arg0 keys:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif