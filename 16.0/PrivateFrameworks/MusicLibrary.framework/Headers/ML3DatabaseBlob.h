// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3DATABASEBLOB_H
#define ML3DATABASEBLOB_H


#import <Foundation/Foundation.h>


@interface ML3DatabaseBlob : NSObject {
    *sqlite3_blob _sqliteHandle;
}




-(NSUInteger)length;
-(id)data;
-(id)init;
-(id)initWithSQLiteHandle:(struct sqlite3_blob *)arg0 ;
-(int)readData:(id)arg0 numberOfBytes:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(int)writeData:(id)arg0 numberOfBytes:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif