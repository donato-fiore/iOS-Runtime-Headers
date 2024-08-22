// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXCALLDIRECTORYSTOREMIGRATIONRESULT_H
#define CXCALLDIRECTORYSTOREMIGRATIONRESULT_H


#import <Foundation/Foundation.h>


@interface CXCallDirectoryStoreMigrationResult : NSObject

@property (nonatomic) NSInteger endingSchemaVersion; // ivar: _endingSchemaVersion
@property (nonatomic) BOOL requiresExtensionDisablement; // ivar: _requiresExtensionDisablement
@property (nonatomic) BOOL requiresExtensionSynchronization; // ivar: _requiresExtensionSynchronization
@property (nonatomic) NSInteger startingSchemaVersion; // ivar: _startingSchemaVersion




@end


#endif