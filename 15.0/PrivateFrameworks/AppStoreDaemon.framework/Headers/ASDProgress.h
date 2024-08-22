// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPROGRESS_H
#define ASDPROGRESS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDProgress : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *bundleID; // ivar: _bundleID
@property NSInteger completedUnitCount; // ivar: _completedUnitCount
@property BOOL reportRemotely; // ivar: _reportRemotely
@property NSInteger totalUnitCount; // ivar: _totalUnitCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif