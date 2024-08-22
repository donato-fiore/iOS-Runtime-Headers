// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSUSAGEAPP_H
#define NSSUSAGEAPP_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSUsageApp : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic) NSUInteger dataSize; // ivar: _dataSize
@property (nonatomic) NSUInteger dynamicSize; // ivar: _dynamicSize
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger sharedSize; // ivar: _sharedSize
@property (nonatomic) NSUInteger staticSize; // ivar: _staticSize
@property (nonatomic) NSUInteger totalSize; // ivar: _totalSize


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif