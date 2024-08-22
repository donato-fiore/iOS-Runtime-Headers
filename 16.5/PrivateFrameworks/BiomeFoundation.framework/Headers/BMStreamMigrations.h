// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMMIGRATIONS_H
#define BMSTREAMMIGRATIONS_H


#import <Foundation/Foundation.h>


@interface BMStreamMigrations : NSObject



+(CGFloat)readCurrentDatabaseVersion;
+(id)pathToVersionFile;
+(void)setDatabaseVersion:(CGFloat)arg0 ;
-(void)_moveStreamsWithPathMapping:(id)arg0 ;
-(void)_removeStreamPaths:(id)arg0 ;
-(void)migrate;
-(void)migrateFromVersion:(CGFloat)arg0 ;


@end


#endif