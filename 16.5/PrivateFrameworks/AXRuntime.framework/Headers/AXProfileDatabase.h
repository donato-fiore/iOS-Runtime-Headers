// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPROFILEDATABASE_H
#define AXPROFILEDATABASE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXProfileDatabase : NSObject {
    NSMutableArray *_entries;
}




+(id)sharedDatabase;
-(id)debugStatistics;
-(id)init;
-(id)transactionSummary;
-(void)registerEntry:(id)arg0 ;


@end


#endif