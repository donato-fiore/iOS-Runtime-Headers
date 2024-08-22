// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REMCHANGEUNIVERSALTOKEN_H
#define _REMCHANGEUNIVERSALTOKEN_H



#import "REMChangeToken.h"

@interface _REMChangeUniversalToken : REMChangeToken



+(BOOL)supportsSecureCoding;
+(id)universalToken;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUniversal;
-(NSInteger)compareToken:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif