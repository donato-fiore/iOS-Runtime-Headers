// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLSOURCEDEVICEACCOUNT_H
#define WLSOURCEDEVICEACCOUNT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLSourceDeviceAccount : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger sqlID; // ivar: _sqlID


+(BOOL)accountInfoArrayContainsNonSyncableAccount:(id)arg0 ;
+(BOOL)accountInfoRepresentsSyncableAccount:(id)arg0 ;
+(id)accountWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;


@end


#endif