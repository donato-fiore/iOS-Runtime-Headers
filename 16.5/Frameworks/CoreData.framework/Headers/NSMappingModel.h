// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMAPPINGMODEL_H
#define NSMAPPINGMODEL_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSMappingModel : NSObject <NSSecureCoding, NSCopying>

 {
    *void _reserved;
    *void _reserved1;
    *void _reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    __modelMappingFlags _modelMappingFlags;
}


@property (retain) NSArray *entityMappings;
@property (readonly, copy) NSDictionary *entityMappingsByName;


+(BOOL)supportsSecureCoding;
+(id)_newMappingModelFromBundles:(id)arg0 forSourceHashes:(id)arg1 destinationHashes:(id)arg2 ;
+(id)inferredMappingModelForSourceModel:(id)arg0 destinationModel:(id)arg1 error:(*id)arg2 ;
+(id)mappingModelFromBundles:(id)arg0 forSourceModel:(id)arg1 destinationModel:(id)arg2 ;
+(int)migrationDebugLevel;
+(void)initialize;
+(void)setMigrationDebugLevel:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEntityMappings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(void)_throwIfNotEditable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif