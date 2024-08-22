// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFTABLEDATA_H
#define EFTABLEDATA_H


#import <Foundation/Foundation.h>

#import "EDTable.h"
#import "EDReference.h"

@interface EFTableData : NSObject {
    EFRefTok mRefTok;
    EDTable *mTable;
    EDReference *mReference;
    int mMakeups;
}




-(*unsigned short)ptgData;
-(id)initWith:(struct EFStrTok *)arg0 ;
-(id)reference;
-(id)table;
-(struct EFRefTok *)refTok;
-(void)dealloc;
-(void)makeup:(id)arg0 with:(int)arg1 ;


@end


#endif