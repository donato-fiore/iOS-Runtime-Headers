// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESECTIONDESCRIPTOR_H
#define RESECTIONDESCRIPTOR_H

@class NSOrderedSet, NSString, NSArray, NSSet;
@protocol REAutomaticExportedInterface, NSCopying;

#import <Foundation/Foundation.h>

#import "REHistoricSectionDescriptor.h"

@interface RESectionDescriptor : NSObject <REAutomaticExportedInterface, NSCopying>

 {
    NSOrderedSet *_rules;
}


@property (retain, nonatomic) REHistoricSectionDescriptor *historicSectionDescriptor; // ivar: _historicSectionDescriptor
@property (nonatomic) NSInteger maxElementCount; // ivar: _maxElementCount
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *orderedRules;
@property (copy, nonatomic) NSSet *rules;


+(id)defaultSectionDescriptorForIdentifier:(id)arg0 ;
+(id)defaultUpNextSectionDescriptorForIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif