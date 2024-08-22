// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDELEMENTPRODUCTION_H
#define TDELEMENTPRODUCTION_H

@class NSManagedObject, NSString, NSDate, NSNumber, NSSet;


#import "TDRenditionKeySpec.h"
#import "TDNamedElement.h"
#import "TDSchemaPartDefinition.h"
#import "TDThemeConstant.h"
#import "TDRenditionType.h"

@interface TDElementProduction : NSManagedObject

@property (retain, nonatomic) TDRenditionKeySpec *baseKeySpec;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *isExcludedFromFilter;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (retain, nonatomic) TDNamedElement *name;
@property (retain, nonatomic) TDSchemaPartDefinition *partDefinition;
@property (retain, nonatomic) TDThemeConstant *renditionSubtype;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) NSSet *renditions;
@property (retain, nonatomic) NSSet *tags;
@property (retain, nonatomic) NSString *universalTypeIdentifier;
@property (retain, nonatomic) TDThemeConstant *zeroCodeArtworkInfo;


-(id)associatedFileModificationDateWithDocument:(id)arg0 ;
-(id)associatedFileURLWithDocument:(id)arg0 ;
-(id)relativePath;
-(void)deleteRenditionsInDocument:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;


@end


#endif