// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBBACKGROUNDRESTOREPROGRESSUPDATE_H
#define MBBACKGROUNDRESTOREPROGRESSUPDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBBackgroundRestoreProgressUpdate : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger estimatedSize; // ivar: _estimatedSize
@property (nonatomic) BOOL hasCellularPolicy; // ivar: _hasCellularPolicy
@property (nonatomic) BOOL isOnInexpensiveCellular; // ivar: _isOnInexpensiveCellular
@property (nonatomic) BOOL isOnWiFi; // ivar: _isOnWiFi
@property (nonatomic) BOOL isThermallyThrottled; // ivar: _isThermallyThrottled


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif