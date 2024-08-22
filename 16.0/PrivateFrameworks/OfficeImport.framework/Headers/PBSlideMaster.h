// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBSLIDEMASTER_H
#define PBSLIDEMASTER_H



#import "PBSlideBase.h"

@interface PBSlideMaster : PBSlideBase



+(id)createMasterStyleMap:(id)arg0 state:(id)arg1 ;
+(id)textBodyForPlaceholderType:(int)arg0 slideLayout:(id)arg1 ;
+(int)textTypeFor:(int)arg0 placeholderType:(int)arg1 ;
+(void)flattenBaseMasterStyleType:(int)arg0 masterStyleMap:(id)arg1 ;
+(void)flattenMasterStyleType:(int)arg0 baseType:(int)arg1 masterStyleMap:(id)arg2 ;
+(void)flattenPlaceholderTextStylesIntoLayout:(id)arg0 layoutType:(int)arg1 masterStyleMap:(id)arg2 ;
+(void)flattenTextStyle:(id)arg0 intoTextBox:(id)arg1 ;
+(void)padMissingLevels:(id)arg0 ;
+(void)readMasterDrawables:(id)arg0 slideHolder:(id)arg1 state:(id)arg2 ;
+(void)readSlideMasterColorScheme:(id)arg0 slideHolder:(id)arg1 state:(id)arg2 ;
+(void)readSlideMasterName:(id)arg0 slideHolder:(id)arg1 state:(id)arg2 ;
+(void)readSlideMasterTextStyles:(id)arg0 slideHolder:(id)arg1 state:(id)arg2 ;
+(void)setCannedOtherTextListStyle:(id)arg0 ;
+(void)setFont:(id)arg0 fromCharacterProperties:(id)arg1 ;
+(void)setSlideMasterTextStyles:(id)arg0 state:(id)arg1 ;


@end


#endif