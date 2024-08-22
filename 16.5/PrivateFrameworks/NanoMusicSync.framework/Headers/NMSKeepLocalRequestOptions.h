// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSKEEPLOCALREQUESTOPTIONS_H
#define NMSKEEPLOCALREQUESTOPTIONS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMSKeepLocalRequestOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSString *cellularBundleIdentifier; // ivar: _cellularBundleIdentifier
@property (nonatomic) NSUInteger cellularPolicy; // ivar: _cellularPolicy
@property (nonatomic) NSUInteger powerPolicy; // ivar: _powerPolicy
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) BOOL requiresValidation; // ivar: _requiresValidation
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif