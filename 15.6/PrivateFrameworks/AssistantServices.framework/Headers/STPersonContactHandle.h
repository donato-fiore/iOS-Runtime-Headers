// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STPERSONCONTACTHANDLE_H
#define STPERSONCONTACTHANDLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STPersonContactHandle : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPersonContactHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif