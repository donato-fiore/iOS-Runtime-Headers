// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTTRANSPORTSTK_H
#define CTTRANSPORTSTK_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTTransportSTK : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int index; // ivar: _index
@property (retain, nonatomic) NSData *key_epki; // ivar: _key_epki
@property (retain, nonatomic) NSData *stk; // ivar: _stk


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSTK:(id)arg0 forIdx:(int)arg1 ;
-(id)initWithSTK:(id)arg0 forIdx:(int)arg1 epki:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif