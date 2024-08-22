// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAVERSIONUPDATER_H
#define AAVERSIONUPDATER_H

@protocol AAVersionUpdaterProtocol_Internal, AAVersionUpdaterProtocol;

#import <Foundation/Foundation.h>


@interface AAVersionUpdater : NSObject <AAVersionUpdaterProtocol_Internal, AAVersionUpdaterProtocol>



@property (nonatomic) NSUInteger currentVersion; // ivar: _currentVersion


-(BOOL)needsUpdate;
-(id)_latestVersion;
-(id)initWithStartingVersion:(NSUInteger)arg0 ;
-(void)_performVersionUpdate:(NSUInteger)arg0 ;
-(void)performMigrations;


@end


#endif