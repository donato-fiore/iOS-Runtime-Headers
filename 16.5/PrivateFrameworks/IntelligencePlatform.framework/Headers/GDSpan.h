// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDSPAN_H
#define GDSPAN_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface GDSpan : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithText:(id)arg0 start:(NSInteger)arg1 end:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif