// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSETTINGVALUE_H
#define HPSETTINGVALUE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HPSettingValue : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif