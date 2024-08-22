// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CKEXPIRABLECOMPOSITION_H
#define _CKEXPIRABLECOMPOSITION_H



#import "CKComposition.h"

@interface _CKExpirableComposition : CKComposition



+(id)compositionWithMediaObject:(id)arg0 subject:(id)arg1 ;
+(id)newCompositionWithText:(id)arg0 subject:(id)arg1 shelfPluginPayload:(id)arg2 ;
-(BOOL)isSaveable;
-(BOOL)isSendAnimated;


@end


#endif