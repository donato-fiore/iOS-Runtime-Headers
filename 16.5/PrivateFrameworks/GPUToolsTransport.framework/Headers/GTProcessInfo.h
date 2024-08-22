// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTPROCESSINFO_H
#define GTPROCESSINFO_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTProcessInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSDictionary *environment; // ivar: _environment
@property (nonatomic) int ppid; // ivar: _ppid
@property (nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (copy, nonatomic) NSString *processName; // ivar: _processName


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif