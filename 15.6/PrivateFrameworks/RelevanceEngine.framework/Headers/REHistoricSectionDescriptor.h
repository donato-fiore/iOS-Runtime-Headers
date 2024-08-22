// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REHISTORICSECTIONDESCRIPTOR_H
#define REHISTORICSECTIONDESCRIPTOR_H

@class NSOrderedSet, NSString, NSArray, NSSet;
@protocol REHistoricSectionDescriptorProperties, NSCopying;

#import <Foundation/Foundation.h>

#import "RESectionDescriptor.h"

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying>

 {
    NSOrderedSet *_rules;
}


@property (nonatomic) BOOL invertsRanking; // ivar: _invertsRanking
@property (nonatomic) NSInteger maxElementCount; // ivar: _maxElementCount
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *orderedRules;
@property (weak, nonatomic) RESectionDescriptor *parentDescriptor; // ivar: _parentDescriptor
@property (copy, nonatomic) NSSet *rules;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif