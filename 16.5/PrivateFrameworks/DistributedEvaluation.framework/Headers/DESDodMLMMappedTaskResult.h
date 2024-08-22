// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDODMLMMAPPEDTASKRESULT_H
#define DESDODMLMMAPPEDTASKRESULT_H



#import "DESInternalDodMLTaskResult.h"
#import "DESSandBoxManager.h"
#import "DESMMappedFile.h"

@interface DESDodMLMMappedTaskResult : DESInternalDodMLTaskResult {
    DESSandBoxManager *_sandboxManager;
    DESMMappedFile *_mmappedFile;
}




-(id)description;
-(id)initWithJSONResult:(id)arg0 binaryResult:(id)arg1 deferred:(BOOL)arg2 deferralURL:(id)arg3 duration:(CGFloat)arg4 ;
-(id)initWithJSONResult:(id)arg0 sandboxManager:(id)arg1 mmappedFile:(id)arg2 duration:(CGFloat)arg3 ;
-(void)dealloc;


@end


#endif