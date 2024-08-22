// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSIMTOOLKITITEM_H
#define CTSIMTOOLKITITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSIMToolkitItem : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 selected:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif