// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSAFEHARBORMIGRATIONSPECIFIER_H
#define WLSAFEHARBORMIGRATIONSPECIFIER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLSafeHarborMigrationSpecifier : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSString *dataType; // ivar: _dataType


+(BOOL)supportsSecureCoding;
-(id)initWithBundleID:(id)arg0 contentType:(id)arg1 dataType:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif