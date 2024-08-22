// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STGENERICINTENTGROUP_H
#define STGENERICINTENTGROUP_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STGenericIntentGroup : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif