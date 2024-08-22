// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLITEINTARRAYTABLE_H
#define NSSQLITEINTARRAYTABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSSQLiteIntarrayTable : NSObject {
    *sqlite3_intarray _intarrayTable;
    NSString *_intarrayTableName;
}




-(void)dealloc;


@end


#endif