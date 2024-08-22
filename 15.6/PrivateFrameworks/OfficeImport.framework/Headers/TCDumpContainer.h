// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCDUMPCONTAINER_H
#define TCDUMPCONTAINER_H

@class NSString;


#import "TCDumpType.h"

@interface TCDumpContainer : TCDumpType {
    int mByteSize;
    int mByteSizeFieldType;
    NSString *mByteSizeFieldName;
    int mByteSizeCorrection;
    TCDumpType *mElementType;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(id)initWithByteSize:(int)arg0 byteSizeFieldType:(int)arg1 byteSizeFieldName:(id)arg2 byteSizeCorrection:(int)arg3 elementType:(id)arg4 ;
-(id)initWithByteSize:(int)arg0 elementType:(id)arg1 ;
-(id)initWithByteSizeFieldName:(id)arg0 byteSizeCorrection:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldName:(id)arg0 elementType:(id)arg1 ;
-(id)initWithByteSizeFieldType:(int)arg0 byteSizeCorrection:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg0 elementType:(id)arg1 ;


@end


#endif