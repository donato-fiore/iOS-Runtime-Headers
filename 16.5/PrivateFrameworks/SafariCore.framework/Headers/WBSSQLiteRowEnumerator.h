// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSQLITEROWENUMERATOR_H
#define WBSSQLITEROWENUMERATOR_H

@class NSEnumerator;


#import "WBSSQLiteRow.h"
#import "WBSSQLiteStatement.h"

@interface WBSSQLiteRowEnumerator : NSEnumerator {
    WBSSQLiteRow *_row;
}


@property (readonly, nonatomic) int lastResultCode; // ivar: _lastResultCode
@property (readonly, nonatomic) WBSSQLiteStatement *statement; // ivar: _statement


-(id)initWithResultsOfStatement:(id)arg0 ;
-(id)nextObject;


@end


#endif