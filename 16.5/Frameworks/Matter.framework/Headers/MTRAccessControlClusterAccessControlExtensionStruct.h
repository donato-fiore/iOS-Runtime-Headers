// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACCESSCONTROLCLUSTERACCESSCONTROLEXTENSIONSTRUCT_H
#define MTRACCESSCONTROLCLUSTERACCESSCONTROLEXTENSIONSTRUCT_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRAccessControlClusterAccessControlExtensionStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif