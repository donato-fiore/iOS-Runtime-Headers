// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMATTERTOPOLOGY_H
#define HMMATTERTOPOLOGY_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMMatterTopology : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, copy, nonatomic) NSArray *homes; // ivar: _homes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomes:(id)arg0 ;
-(id)initWithHomes:(id)arg0 appBundleID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif