// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCDUMPSTRUCT_H
#define TCDUMPSTRUCT_H

@class NSString, NSMutableArray;


#import "TCDumpType.h"

@interface TCDumpStruct : TCDumpType {
    NSInteger mSize;
    NSString *mSizeFieldName;
    NSInteger mSizeCorrection;
    NSMutableArray *mMembers;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(id)initWithMembers:(id)arg0 ;
-(id)initWithSize:(NSInteger)arg0 members:(id)arg1 ;
-(id)initWithSize:(NSInteger)arg0 sizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3 ;
-(id)initWithSizeFieldName:(id)arg0 members:(id)arg1 ;
-(id)initWithSizeFieldName:(id)arg0 sizeCorrection:(int)arg1 members:(id)arg2 ;


@end


#endif