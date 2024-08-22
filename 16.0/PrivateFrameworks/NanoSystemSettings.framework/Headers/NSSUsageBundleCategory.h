// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSUSAGEBUNDLECATEGORY_H
#define NSSUSAGEBUNDLECATEGORY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSUsageBundleCategory : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif