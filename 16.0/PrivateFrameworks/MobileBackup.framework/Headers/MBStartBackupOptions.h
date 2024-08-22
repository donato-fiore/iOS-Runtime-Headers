// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBSTARTBACKUPOPTIONS_H
#define MBSTARTBACKUPOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MBCellularAccess.h"

@interface MBStartBackupOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger backupPolicy; // ivar: _backupPolicy
@property (copy, nonatomic) MBCellularAccess *cellularAccess; // ivar: _cellularAccess


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif