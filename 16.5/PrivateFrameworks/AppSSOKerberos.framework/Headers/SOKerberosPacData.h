// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOKERBEROSPACDATA_H
#define SOKERBEROSPACDATA_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SOKerberosPacData : NSObject

@property (retain) NSString *effectiveName; // ivar: _effectiveName
@property (retain) NSString *fullName; // ivar: _fullName
@property (retain) NSString *homeDirectory; // ivar: _homeDirectory
@property (retain) NSDate *passwordCanChange; // ivar: _passwordCanChange
@property (retain) NSDate *passwordLastSet; // ivar: _passwordLastSet
@property (retain) NSDate *passwordMustChange; // ivar: _passwordMustChange
@property BOOL passwordNeverExpires; // ivar: _passwordNeverExpires


-(id)convertFromFileTime:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithValidationInfo:(struct ? *)arg0 ;


@end


#endif