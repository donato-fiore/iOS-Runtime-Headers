// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFETCHEDPROPERTYDESCRIPTION_H
#define NSFETCHEDPROPERTYDESCRIPTION_H

@class NSString;


#import "NSPropertyDescription.h"
#import "NSFetchRequest.h"

@interface NSFetchedPropertyDescription : NSPropertyDescription {
    *void _reserved5;
    *void _reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}


@property (retain) NSFetchRequest *fetchRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReadOnly;
-(BOOL)isTransient;
-(NSUInteger)_propertyType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setReadOnly:(BOOL)arg0 ;
-(void)setTransient:(BOOL)arg0 ;


@end


#endif