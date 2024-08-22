// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKSQLITEREADER_H
#define FBKSQLITEREADER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface FBKSqliteReader : NSObject

@property (retain, nonatomic) NSURL *dbFile; // ivar: _dbFile


-(id)allRowsForTable:(id)arg0 ;
-(id)csvRepresentationForTable:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)runQuery:(id)arg0 ;
-(id)tableNames;


@end


#endif