// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBSTARTRESTOREOPTIONS_H
#define MBSTARTRESTOREOPTIONS_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MBCellularAccess.h"

@interface MBStartRestoreOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) MBCellularAccess *cellularAccess; // ivar: _cellularAccess
@property (copy, nonatomic) NSSet *excludedAppBundleIDs; // ivar: _excludedAppBundleIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif