// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITESTATEMENT_H
#define SIRICORESQLITESTATEMENT_H


#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteStatement : NSObject {
    *sqlite3_stmt _impl;
    BOOL _finalizeWhenDone;
}




-(id)initWithImpl:(struct sqlite3_stmt *)arg0 finalizeWhenDone:(BOOL)arg1 ;
-(struct sqlite3_stmt *)impl;
-(void)clearBindings;
-(void)dealloc;
-(void)reset;


@end


#endif