// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLINTERNALNLPMODELWRITER_H
#define _MLINTERNALNLPMODELWRITER_H


#import <Foundation/Foundation.h>


@interface _MLInternalNLPModelWriter : NSObject



+(BOOL)saveCustomSentenceClassifierModelToURL:(id)arg0 modelData:(id)arg1 stringInputName:(id)arg2 classname:(id)arg3 NSError:(*id)arg4 ;
+(BOOL)saveCustomSentenceModelToURL:(id)arg0 modelData:(id)arg1 stringInputName:(id)arg2 classname:(id)arg3 NSError:(*id)arg4 ;
+(BOOL)saveCustomSequenceModelToURL:(id)arg0 modelData:(id)arg1 stringInputName:(id)arg2 classname:(id)arg3 NSError:(*id)arg4 ;
+(BOOL)saveCustomWordTaggingModelToURL:(id)arg0 modelData:(id)arg1 stringInputName:(id)arg2 classname:(id)arg3 NSError:(*id)arg4 ;


@end


#endif