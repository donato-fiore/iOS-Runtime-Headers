// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOSHIELDLABEL_H
#define MOSHIELDLABEL_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MOShieldLabel : NSObject <NSSecureCoding>



@property (readonly, copy) NSData *colorData; // ivar: _colorData
@property (readonly, copy) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 colorData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif