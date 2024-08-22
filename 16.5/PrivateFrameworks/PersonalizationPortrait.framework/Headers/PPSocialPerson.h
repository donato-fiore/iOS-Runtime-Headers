// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALPERSON_H
#define PPSOCIALPERSON_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPSocialPerson : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 displayName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif