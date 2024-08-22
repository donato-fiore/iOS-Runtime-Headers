// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYSTRUCT_H
#define MTRACCESSCONTROLCLUSTERACCESSCONTROLENTRYSTRUCT_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRAccessControlClusterAccessControlEntryStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *authMode; // ivar: _authMode
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (copy, nonatomic) NSArray *subjects; // ivar: _subjects
@property (copy, nonatomic) NSArray *targets; // ivar: _targets


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif