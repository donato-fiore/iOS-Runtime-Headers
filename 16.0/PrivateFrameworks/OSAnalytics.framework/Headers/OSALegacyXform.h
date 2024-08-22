// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSALEGACYXFORM_H
#define OSALEGACYXFORM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OSALegacyXform : NSObject {
    NSMutableDictionary *_templates;
}




+(id)rollSchemaForward:(id)arg0 ;
+(id)transformURL:(id)arg0 options:(id)arg1 ;
-(BOOL)prepareTemplate:(id)arg0 forLogType:(id)arg1 error:(*id)arg2 ;
-(BOOL)transformJSON:(id)arg0 header:(id)arg1 error:(*id)arg2 streamingBlock:(id)arg3 ;
-(BOOL)transformLines:(id)arg0 withDefinitions:(id)arg1 body:(id)arg2 header:(id)arg3 error:(*id)arg4 streamingBlock:(id)arg5 ;
-(id)_getValueForKey:(id)arg0 fromBody:(id)arg1 orHeader:(id)arg2 ;
-(id)_hexDump:(id)arg0 offset:(int)arg1 indicator:(BOOL)arg2 ;
-(id)formatArm32ThreadState:(id)arg0 index:(int)arg1 ;
-(id)formatArm64ThreadState:(id)arg0 index:(int)arg1 ;
-(id)formatCallstacks:(id)arg0 withImages:(id)arg1 macosStyle:(BOOL)arg2 ;
-(id)formatFrame:(id)arg0 withImages:(id)arg1 macosStyle:(BOOL)arg2 ;
-(id)formatImages:(id)arg0 macosStyle:(BOOL)arg1 ;
-(id)formatInstructionState:(id)arg0 index:(int)arg1 ;
-(id)formatLastBranchState:(id)arg0 index:(int)arg1 withImages:(id)arg2 ;
-(id)formatLastException:(id)arg0 withImages:(id)arg1 ;
-(id)formatX86ThreadState:(id)arg0 index:(int)arg1 ;
-(id)init;


@end


#endif