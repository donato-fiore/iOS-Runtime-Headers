// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRWEBUSAGE_H
#define SRWEBUSAGE_H

@class NSString;
@protocol SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property CGFloat totalUsageTime; // ivar: _totalUsageTime


+(BOOL)supportsSecureCoding;
+(id)webUsageWithTotalUsageTime:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif