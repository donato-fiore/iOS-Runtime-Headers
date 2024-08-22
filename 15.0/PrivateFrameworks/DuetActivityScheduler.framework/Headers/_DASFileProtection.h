// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASFILEPROTECTION_H
#define _DASFILEPROTECTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *fileProtection; // ivar: _fileProtection


+(BOOL)supportsSecureCoding;
+(id)complete;
+(id)completeUnlessOpen;
+(id)completeUntilFirstUserAuthentication;
+(id)none;
-(BOOL)indicatesProtection;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif