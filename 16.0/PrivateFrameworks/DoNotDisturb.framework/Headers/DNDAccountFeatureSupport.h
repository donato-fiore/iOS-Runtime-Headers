// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDACCOUNTFEATURESUPPORT_H
#define DNDACCOUNTFEATURESUPPORT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDAccountFeatureSupport : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger cloudFeatures; // ivar: _cloudFeatures
@property (readonly, nonatomic) BOOL hasCloudDevices; // ivar: _hasCloudDevices
@property (readonly, nonatomic) BOOL hasPairedDevices; // ivar: _hasPairedDevices
@property (readonly, nonatomic) NSUInteger pairedFeatures; // ivar: _pairedFeatures


+(BOOL)supportsSecureCoding;
+(id)accountFeaturesWithCloud:(NSUInteger)arg0 hasCloudDevices:(BOOL)arg1 paired:(NSUInteger)arg2 hasPairedDevices:(BOOL)arg3 ;
-(id)_initWithCloud:(NSUInteger)arg0 hasCloud:(BOOL)arg1 paired:(NSUInteger)arg2 hasPaired:(BOOL)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif