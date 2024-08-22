// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILCLASSIFICATIONRESPONSE_H
#define ILCLASSIFICATIONRESPONSE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILClassificationResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (copy, nonatomic) NSString *userString; // ivar: _userString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithClassificationAction:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif