// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NOTESMIGRATIONMAPPING_H
#define NOTESMIGRATIONMAPPING_H

@class NSString, NSManagedObjectModel, NSArray;

#import <Foundation/Foundation.h>


@interface NotesMigrationMapping : NSObject

@property (copy) NSString *descriptionString; // ivar: _descriptionString
@property (retain) NSManagedObjectModel *destinationModel; // ivar: _destinationModel
@property (copy) NSArray *sourceModels; // ivar: _sourceModels
@property NSInteger type; // ivar: _type


+(id)customMappingFromSourceModelName:(id)arg0 toDestinationModelName:(id)arg1 ;
+(id)descriptionStringFromSourceStoreNames:(id)arg0 destinationStoreName:(id)arg1 ;
+(id)inferredMappingFromSourceModelNames:(id)arg0 toDestinationModelName:(id)arg1 ;
+(id)mappings;
+(id)modelForModelName:(id)arg0 ;
-(BOOL)canMigrateStoreMetadata:(id)arg0 ;
-(id)description;
-(id)mappingModelForStoreMetadata:(id)arg0 ;
-(id)sourceModelForStoreMetadata:(id)arg0 ;


@end


#endif