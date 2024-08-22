// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCDUMPUNION_H
#define TCDUMPUNION_H

@class NSString, NSMutableDictionary;


#import "TCDumpType.h"
#import "TCDumpNumeric.h"

@interface TCDumpUnion : TCDumpType {
    NSString *mSelectorFieldName;
    TCDumpNumeric *mSelectorField;
    NSMutableDictionary *mSelectorToMemberMap;
}




-(?)fromBinary:(?)arg0 toXmlstate;
-(id)initWithSelectorField:(id)arg0 members:(id)arg1 ;
-(id)initWithSelectorFieldName:(id)arg0 selectorEnumType:(id)arg1 members:(id)arg2 ;
-(id)initWithSelectorFieldName:(id)arg0 selectorEnumType:(id)arg1 selectorField:(id)arg2 members:(id)arg3 ;


@end


#endif