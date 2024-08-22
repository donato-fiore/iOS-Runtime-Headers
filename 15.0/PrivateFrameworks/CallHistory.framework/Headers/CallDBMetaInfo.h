// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLDBMETAINFO_H
#define CALLDBMETAINFO_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CallDBMetaInfo : NSObject

@property (retain) NSURL *dbInfoPrefFile; // ivar: _dbInfoPrefFile


-(BOOL)validateInfo:(BOOL)arg0 ;
-(NSInteger)readDatabaseVersion:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)writeDatabaseVersion:(NSInteger)arg0 isTemp:(BOOL)arg1 ;


@end


#endif