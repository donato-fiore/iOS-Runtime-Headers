// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRMODESELECTCLUSTERSEMANTICTAGSTRUCT_H
#define MTRMODESELECTCLUSTERSEMANTICTAGSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRModeSelectClusterSemanticTagStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *mfgCode; // ivar: _mfgCode
@property (copy, nonatomic) NSNumber *value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif