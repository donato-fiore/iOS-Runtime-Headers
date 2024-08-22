// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEVALIDATION_H
#define ML3DATABASEVALIDATION_H

@protocol ML3DatabaseValidationDelegate;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3DatabaseValidation : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<ML3DatabaseValidationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library
@property (nonatomic) BOOL truncateBeforeValidating; // ivar: _truncateBeforeValidating


-(BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
-(BOOL)_performDatabasePreprocessingWithLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_performSchemaUpgradeWithLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_truncateDatabaseFileForLibrary:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_validateLibraryDatabaseIfNecessary:(id)arg0 withError:(*id)arg1 ;
-(id)initWithLibrary:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;
-(void)_logDatabasePathDirectoryAttributes;
-(void)runValidation;


@end


#endif