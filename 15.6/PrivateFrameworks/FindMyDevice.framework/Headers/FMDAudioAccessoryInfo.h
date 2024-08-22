// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDAUDIOACCESSORYINFO_H
#define FMDAUDIOACCESSORYINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *leftSerialNumber; // ivar: _leftSerialNumber
@property (copy, nonatomic) NSString *rightSerialNumber; // ivar: _rightSerialNumber
@property (copy, nonatomic) NSString *systemSerialNumber; // ivar: _systemSerialNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemSerialNumber:(id)arg0 leftSerialNumber:(id)arg1 rightSerialNumber:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif