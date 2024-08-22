// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTAPPDATAUSAGE_H
#define CTAPPDATAUSAGE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTDataUsed.h"

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) CTDataUsed *used; // ivar: _used


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init:(id)arg0 withDisplayName:(id)arg1 andUsage:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)usage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif