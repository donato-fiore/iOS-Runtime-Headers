// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPCONTEXT_H
#define WSPCONTEXT_H

@class NSString, NSMutableArray, NSDate;

#import <Foundation/Foundation.h>

#import "pidMapper.h"

@interface wspContext : NSObject

@property (retain) NSString *clientMachineName; // ivar: _clientMachineName
@property (retain) NSString *contentPattern; // ivar: _contentPattern
@property unsigned int cursor; // ivar: _cursor
@property (retain) NSMutableArray *fextPatterns; // ivar: _fextPatterns
@property (retain) NSMutableArray *fnamePatterns; // ivar: _fnamePatterns
@property (retain) NSDate *modDate; // ivar: _modDate
@property timespec modDateSpec; // ivar: _modDateSpec
@property (retain) pidMapper *pidMap; // ivar: _pidMap
@property int queryType; // ivar: _queryType
@property unsigned int rowsSoFar; // ivar: _rowsSoFar
@property (retain) NSString *searchPath; // ivar: _searchPath
@property unsigned int seekBookmarkOffset; // ivar: _seekBookmarkOffset
@property unsigned int seekSkip; // ivar: _seekSkip
@property (retain) NSString *serverAddress; // ivar: _serverAddress
@property (retain) NSString *serverName; // ivar: _serverName
@property (readonly) unsigned int serverVersion; // ivar: _serverVersion
@property (readonly) BOOL supports64BitOffsets; // ivar: _supports64BitOffsets
@property unsigned int trueSequential; // ivar: _trueSequential
@property (retain) NSString *userName; // ivar: _userName
@property unsigned int whereID; // ivar: _whereID
@property unsigned int workID; // ivar: _workID


-(BOOL)serverSupports64BitOffsets;
-(id)init;
-(void)logContents;
-(void)setContentSearch:(id)arg0 ;
-(void)setFileExtSearch:(id)arg0 ;
-(void)setFilenameSearch:(id)arg0 ;


@end


#endif