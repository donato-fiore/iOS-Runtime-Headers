// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATABASEOBJECTWITHFILESTATE_H
#define TSPDATABASEOBJECTWITHFILESTATE_H

@class NSString, NSURL;


#import "TSPDatabaseObject.h"

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {
    NSString *_fileState;
    NSURL *_packageURL;
}




-(BOOL)hasDataState;
-(BOOL)hasFileState;
-(NSInteger)dataState;
-(id)fileState;
-(id)fileURL;
-(id)initWithIdentifier:(NSInteger)arg0 classType:(int)arg1 fileState:(id)arg2 packageURL:(id)arg3 ;


@end


#endif