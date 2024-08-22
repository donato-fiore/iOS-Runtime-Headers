// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRNOTIFICATIONUSAGE_H
#define SRNOTIFICATIONUSAGE_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRNotificationUsage : NSObject <SRSampleExporting, NSSecureCoding>



@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)notificationUsageWithBundleIdentifier:(id)arg0 eventType:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif