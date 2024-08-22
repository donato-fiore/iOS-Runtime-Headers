// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPMERGEPROPERTY_H
#define TSWPMERGEPROPERTY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSWPMergeFieldType.h"

@interface TSWPMergeProperty : NSObject <NSCopying>



@property (readonly, nonatomic) TSWPMergeFieldType *mergeFieldType; // ivar: _mergeFieldType
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMergeFieldType:(id)arg0 stringValue:(id)arg1 ;


@end


#endif