// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSUSAGEBUNDLE_H
#define NSSUSAGEBUNDLE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSUsageBundle : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPurgeable) BOOL purgeable; // ivar: _purgeable
@property (nonatomic) NSUInteger totalSize; // ivar: _totalSize


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif