// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAADJUSTMENTSTACK_H
#define IPAADJUSTMENTSTACK_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IPAAdjustmentVersionInfo.h"

@interface IPAAdjustmentStack : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *adjustments; // ivar: _adjustments
@property (copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo; // ivar: _versionInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustmentStack:(id)arg0 ;
-(id)_debugDescriptionSuffix;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)minimumVersionForFormat:(id)arg0 ;


@end


#endif