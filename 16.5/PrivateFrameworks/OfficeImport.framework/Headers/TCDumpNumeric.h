// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCDUMPNUMERIC_H
#define TCDUMPNUMERIC_H



#import "TCDumpType.h"
#import "TCDumpEnum.h"

@interface TCDumpNumeric : TCDumpType {
    int mType;
    TCDumpEnum *mEnumType;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(?)fromXml:(?)arg0 toBinarystate;
-(id)enumType;
-(id)initWithType:(int)arg0 ;
-(id)initWithType:(int)arg0 enumType:(id)arg1 ;
-(int)type;


@end


#endif