// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCDUMPARRAY_H
#define TCDUMPARRAY_H

@class NSString;


#import "TCDumpType.h"

@interface TCDumpArray : TCDumpType {
    int mCount;
    int mCountFieldType;
    NSString *mCountFieldName;
    int mPaddingSize;
    TCDumpType *mElementType;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(id)initWithCount:(int)arg0 countFieldType:(int)arg1 countFieldName:(id)arg2 elementType:(id)arg3 ;
-(id)initWithCount:(int)arg0 elementType:(id)arg1 ;
-(id)initWithCountFieldName:(id)arg0 elementType:(id)arg1 ;
-(id)initWithCountFieldType:(int)arg0 elementType:(id)arg1 ;


@end


#endif