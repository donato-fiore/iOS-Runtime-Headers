// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDSCHEMADEFINITION_H
#define TDSCHEMADEFINITION_H

@class NSManagedObject, NSString, NSSet;


#import "TDSchemaCategory.h"

@interface TDSchemaDefinition : NSManagedObject

@property (retain, nonatomic) TDSchemaCategory *category;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *parts;
@property BOOL published;


+(NSUInteger)elementDefinitionCountWithSchema:(id)arg0 ;
+(struct ? *)elementDefinitionWithName:(id)arg0 withSchema:(id)arg1 ;
+(struct ? *)sortedElementDefinitionAtIndex:(NSUInteger)arg0 withSchema:(id)arg1 ;
-(id)displayName;
-(id)previewImage;


@end


#endif