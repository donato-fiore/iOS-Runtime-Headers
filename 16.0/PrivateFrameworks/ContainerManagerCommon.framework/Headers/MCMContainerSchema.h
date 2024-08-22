// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERSCHEMA_H
#define MCMCONTAINERSCHEMA_H

@class NSNumber;
@protocol MCMMetadataMinimal;

#import <Foundation/Foundation.h>

#import "MCMContainerSchemaContext.h"

@interface MCMContainerSchema : NSObject

@property (readonly, nonatomic) MCMContainerSchemaContext *context; // ivar: _context
@property (readonly, nonatomic) NSNumber *latestSchemaVersion; // ivar: _latestSchemaVersion
@property (readonly, nonatomic) NSObject<MCMMetadataMinimal> *metadata; // ivar: _metadata


+(BOOL)schemaIsUpToDateForIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 currentSchemaVersion:(id)arg2 latestSchemaVersion:(*id)arg3 ;
+(id)containerSchemaWithMetadata:(id)arg0 dataProtectionClass:(int)arg1 libraryRepair:(id)arg2 ;
-(BOOL)_executeActions:(id)arg0 error:(*id)arg1 ;
-(BOOL)_sanityCheckPassesForBundleID:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeSchemaFromVersion:(id)arg0 toTargetVersion:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeSchemaToTargetVersion:(id)arg0 error:(*id)arg1 ;
-(id)_actionArgsAfterInterpolationOnActionArgs:(id)arg0 replacements:(id)arg1 ;
-(id)_actionsFromVersion:(id)arg0 toTargetVersion:(id)arg1 context:(id)arg2 ;
-(id)_interpolationReplacements;
-(id)initWithMetadata:(id)arg0 dataProtectionClass:(int)arg1 libraryRepair:(id)arg2 ;


@end


#endif