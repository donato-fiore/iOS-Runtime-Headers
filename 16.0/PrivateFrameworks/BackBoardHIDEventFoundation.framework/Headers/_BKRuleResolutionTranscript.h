// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BKRULERESOLUTIONTRANSCRIPT_H
#define _BKRULERESOLUTIONTRANSCRIPT_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface _BKRuleResolutionTranscript : NSObject {
    NSMutableString *_string;
    NSInteger _indentLevel;
}




-(id)build;
-(id)init;
-(id)saveSection;
-(void)_appendIndent;
-(void)_appendIndentedItemWithPrefix:(id)arg0 label:(id)arg1 args:(char *)arg2 ;
-(void)appendEnvironment:(id)arg0 ;
-(void)appendFailure:(id)arg0 ;
-(void)appendItem:(id)arg0 ;
-(void)appendMatch:(id)arg0 ;
-(void)appendRejection:(id)arg0 ;
-(void)appendResolution:(id)arg0 ;
-(void)appendSection:(id)arg0 ;
-(void)popSection;
-(void)pushSection;
-(void)restoreSection:(id)arg0 ;


@end


#endif