// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WXTEXT_H
#define WXTEXT_H


#import <Foundation/Foundation.h>


@interface WXText : NSObject



+(?)createChildren:(?)arg0 baseStyle:(?)arg1 tostate;
+(?)readFrom:(?)arg0 baseStyle:(?)arg1 tostate;
+(?)readFromParagraph:(?)arg0 baseStyle:(?)arg1 tostate;
+(?)readFromTable:(?)arg0 baseStyle:(?)arg1 tostate;
+(?)readFromstate;
+(id)addNewSectionTo:(id)arg0 state:(id)arg1 ;
+(void)createChildrenFromStream:(struct _xmlTextReader *)arg0 baseStyle:(id)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)readFromStream:(struct _xmlTextReader *)arg0 baseStyle:(id)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)readFromStream:(struct _xmlTextReader *)arg0 state:(id)arg1 ;
+(void)readFromString:(id)arg0 to:(id)arg1 ;
+(void)updateTextBoxIdsFromState:(id)arg0 ;


@end


#endif