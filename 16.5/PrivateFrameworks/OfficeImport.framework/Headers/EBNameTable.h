// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBNAMETABLE_H
#define EBNAMETABLE_H


#import <Foundation/Foundation.h>


@interface EBNameTable : NSObject



+(*void)createXlNameTableFromNamesCollection:(id)arg0 state:(id)arg1 ;
+(?)xlNameFromEDNamestate;
+(id)edNameFromXlName:(struct XlName *)arg0 name:(struct OcText )arg1 state:(id)arg2 ;
+(void)readFromState:(id)arg0 ;


@end


#endif