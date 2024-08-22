// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSIMLABEL_H
#define CTSIMLABEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL didSetup; // ivar: _didSetup
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *unique_id; // ivar: _unique_id


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithId:(id)arg0 andText:(id)arg1 andDidSetup:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif