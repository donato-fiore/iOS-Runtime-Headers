// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSREGISTRATION_H
#define PDSREGISTRATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PDSRegistration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) char pushEnvironment; // ivar: _pushEnvironment
@property (readonly, nonatomic) NSString *qualifierString; // ivar: _qualifierString
@property (readonly, nonatomic) NSString *topicString; // ivar: _topicString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegistration:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopic:(id)arg0 pushEnvironment:(char)arg1 ;
-(id)initWithTopic:(id)arg0 qualifier:(id)arg1 pushEnvironment:(char)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif