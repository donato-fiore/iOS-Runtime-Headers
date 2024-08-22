// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPASSETTAG_H
#define UARPASSETTAG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPAssetTag : NSObject <NSCopying, NSSecureCoding>



@property (readonly) char char1; // ivar: _char1
@property (readonly) char char2; // ivar: _char2
@property (readonly) char char3; // ivar: _char3
@property (readonly) char char4; // ivar: _char4
@property (readonly) unsigned int tag; // ivar: _tag


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(char *)decodeCharForKey:(id)arg0 key:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChar1:(char)arg0 char2:(char)arg1 char3:(char)arg2 char4:(char)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif