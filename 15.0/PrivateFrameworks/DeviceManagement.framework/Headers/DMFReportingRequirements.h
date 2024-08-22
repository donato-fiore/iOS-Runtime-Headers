// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFREPORTINGREQUIREMENTS_H
#define DMFREPORTINGREQUIREMENTS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *reachableHostName; // ivar: _reachableHostName
@property (nonatomic) BOOL requireActiveConnection; // ivar: _requireActiveConnection
@property (nonatomic) CGFloat updateCoalescenceInterval; // ivar: _updateCoalescenceInterval


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif