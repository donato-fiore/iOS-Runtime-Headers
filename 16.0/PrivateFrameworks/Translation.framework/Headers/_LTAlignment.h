// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTALIGNMENT_H
#define _LTALIGNMENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTAlignment : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL shouldTranslate; // ivar: _shouldTranslate
@property (nonatomic) _NSRange sourceRange; // ivar: _sourceRange
@property (nonatomic) _NSRange targetRange; // ivar: _targetRange
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif