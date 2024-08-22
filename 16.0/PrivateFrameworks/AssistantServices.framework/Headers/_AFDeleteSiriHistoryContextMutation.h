// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFDELETESIRIHISTORYCONTEXTMUTATION_H
#define _AFDELETESIRIHISTORYCONTEXTMUTATION_H

@class NSString;
@protocol AFDeleteSiriHistoryContextMutating;

#import <Foundation/Foundation.h>

#import "AFDeleteSiriHistoryContext.h"

@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating>

 {
    AFDeleteSiriHistoryContext *_base;
    NSString *_successTitle;
    NSString *_successBody;
    NSString *_successButtonText;
    NSString *_errorTitle;
    NSString *_errorBody;
    NSString *_errorButtonText;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getErrorBody;
-(id)getErrorButtonText;
-(id)getErrorTitle;
-(id)getSuccessBody;
-(id)getSuccessButtonText;
-(id)getSuccessTitle;
-(id)initWithBase:(id)arg0 ;
-(void)setErrorBody:(id)arg0 ;
-(void)setErrorButtonText:(id)arg0 ;
-(void)setErrorTitle:(id)arg0 ;
-(void)setSuccessBody:(id)arg0 ;
-(void)setSuccessButtonText:(id)arg0 ;
-(void)setSuccessTitle:(id)arg0 ;


@end


#endif