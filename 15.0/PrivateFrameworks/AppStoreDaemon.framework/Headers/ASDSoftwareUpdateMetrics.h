// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSOFTWAREUPDATEMETRICS_H
#define ASDSOFTWAREUPDATEMETRICS_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *lastUpdateCheck; // ivar: _lastUpdateCheck
@property (copy, nonatomic) NSDate *nextUpdateCheck; // ivar: _nextUpdateCheck
@property (nonatomic) BOOL usingModernUpdatesCheck; // ivar: _usingModernUpdatesCheck


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif