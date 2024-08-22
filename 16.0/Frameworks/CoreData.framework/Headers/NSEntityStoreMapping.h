// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSENTITYSTOREMAPPING_H
#define NSENTITYSTOREMAPPING_H

@class NSDictionary, NSArray, NSString;


#import "NSStoreMapping.h"
#import "NSEntityDescription.h"

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSingleTableEntity;
-(id)description;
-(id)entity;
-(id)initWithEntity:(id)arg0 ;
-(id)primaryKeys;
-(id)propertyMappings;
-(id)subentityColumn;
-(unsigned int)subentityID;
-(void)dealloc;


@end


#endif