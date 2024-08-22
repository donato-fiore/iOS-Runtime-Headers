// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDATABASEOBJECTWITHDATASTATE_H
#define TSPDATABASEOBJECTWITHDATASTATE_H



#import "TSPDatabaseObject.h"

@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    NSInteger _dataState;
}




-(BOOL)hasDataState;
-(BOOL)hasFileState;
-(NSInteger)dataState;
-(id)fileState;
-(id)fileURL;
-(id)initWithIdentifier:(NSInteger)arg0 classType:(int)arg1 dataState:(NSInteger)arg2 ;


@end


#endif