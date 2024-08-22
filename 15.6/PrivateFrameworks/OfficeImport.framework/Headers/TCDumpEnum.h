// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCDUMPENUM_H
#define TCDUMPENUM_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TCDumpEnum : NSObject {
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}




-(id)initWithTypeName:(id)arg0 pairs:(struct TCDumpEnumPair *)arg1 ;
-(id)nameForValue:(int)arg0 ;
-(id)typeName;
-(id)valueForName:(id)arg0 ;


@end


#endif