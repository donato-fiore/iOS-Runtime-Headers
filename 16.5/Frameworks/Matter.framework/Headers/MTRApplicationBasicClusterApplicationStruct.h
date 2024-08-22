// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRAPPLICATIONBASICCLUSTERAPPLICATIONSTRUCT_H
#define MTRAPPLICATIONBASICCLUSTERAPPLICATIONSTRUCT_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRApplicationBasicClusterApplicationStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (copy, nonatomic) NSString *applicationId;
@property (copy, nonatomic) NSNumber *catalogVendorID; // ivar: _catalogVendorID
@property (copy, nonatomic) NSNumber *catalogVendorId;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif