// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSIMTOOLKITMENU_H
#define CTSIMTOOLKITMENU_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSIMToolkitMenu : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *subTitles; // ivar: _subTitles
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif