// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKDATABASEENCRYPTIONSTARTUPMIDDLEWARE_H
#define FCCKDATABASEENCRYPTIONSTARTUPMIDDLEWARE_H

@class NSString;
@protocol FCCKDatabaseStartUpMiddleware, FCCKDatabaseMigrator;

#import <Foundation/Foundation.h>


@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware>

 {
    id<FCCKDatabaseMigrator> *_encryptionMigrator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)performStartUpForDatabase:(id)arg0 completion:(id)arg1 ;


@end


#endif