// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERSYNCARCHIVE_H
#define ICSYSTEMPAPERSYNCARCHIVE_H

@class NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface ICSystemPaperSyncArchive : NSObject {
    ? databaseArchive;
    ? assetArchives;
}


@property (nonatomic, readonly) NSArray *assetArchives;
@property (nonatomic, readonly) NSURL *databaseArchive;
@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithDatabaseArchive:(id)arg0 assetArchives:(id)arg1 ;


@end


#endif