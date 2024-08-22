// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCATARGET_H
#define CTCATARGET_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCATarget : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *targetDescription; // ivar: _targetDescription
@property (retain, nonatomic) NSNumber *targetId; // ivar: _targetId
@property (retain, nonatomic) NSNumber *x; // ivar: _x
@property (retain, nonatomic) NSNumber *y; // ivar: _y


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif