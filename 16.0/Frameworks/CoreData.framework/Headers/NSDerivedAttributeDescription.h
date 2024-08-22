// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDERIVEDATTRIBUTEDESCRIPTION_H
#define NSDERIVEDATTRIBUTEDESCRIPTION_H

@class NSExpression, NSPredicate;


#import "NSAttributeDescription.h"

@interface NSDerivedAttributeDescription : NSAttributeDescription {
    NSExpression *_derivationExpression;
    NSPredicate *_filteringPredicate;
}


@property (retain) NSExpression *derivationExpression;


+(BOOL)supportsSecureCoding;
-(BOOL)_isSchemaEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReadOnly;
-(BOOL)isTransient;
-(NSUInteger)_propertyType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char *)arg0 inStyle:(NSUInteger)arg1 ;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 ;
-(void)setReadOnly:(BOOL)arg0 ;
-(void)setRenamingIdentifier:(id)arg0 ;
-(void)setTransient:(BOOL)arg0 ;


@end


#endif