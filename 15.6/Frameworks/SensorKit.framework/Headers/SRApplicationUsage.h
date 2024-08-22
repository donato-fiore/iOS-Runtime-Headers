// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRAPPLICATIONUSAGE_H
#define SRAPPLICATIONUSAGE_H

@class NSString, NSMutableArray, NSArray;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRApplicationUsage : NSObject <SRSampleExporting, NSSecureCoding>



@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *mutableTextInputSessions; // ivar: _mutableTextInputSessions
@property (copy) NSString *reportApplicationIdentifier; // ivar: _reportApplicationIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *textInputSessions;
@property CGFloat usageTime; // ivar: _usageTime


+(BOOL)supportsSecureCoding;
+(id)applicationUsageWithBundleIdentifier:(id)arg0 reportApplicationIdentifier:(id)arg1 totalUsageTime:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif