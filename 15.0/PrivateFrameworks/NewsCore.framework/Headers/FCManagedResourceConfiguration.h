// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMANAGEDRESOURCECONFIGURATION_H
#define FCMANAGEDRESOURCECONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCManagedResourceConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger refreshRate; // ivar: _refreshRate
@property (readonly, copy, nonatomic) NSString *resourceID; // ivar: _resourceID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithResourceID:(id)arg0 refreshRate:(NSInteger)arg1 ;


@end


#endif