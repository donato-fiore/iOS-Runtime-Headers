// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSMAPPINGMODELBUILDER_H
#define _NSMAPPINGMODELBUILDER_H

@class NSError;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSEntityMapping.h"

@interface _NSMappingModelBuilder : NSObject {
    NSManagedObjectModel *_sourceModel;
    NSManagedObjectModel *_destinationModel;
    NSEntityMapping *_currentEntityMapping;
    NSError *_error;
}




+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg0 ;
-(id)initWithSourceModel:(id)arg0 destinationModel:(id)arg1 ;
-(void)dealloc;


@end


#endif