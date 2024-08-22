// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFERRORHANDLER_H
#define HFERRORHANDLER_H


#import <Foundation/Foundation.h>


@interface HFErrorHandler : NSObject

@property (nonatomic, getter=isPresentingAlert) BOOL presentingAlert; // ivar: _presentingAlert


+(id)_descriptionForHFErrorCode:(NSInteger)arg0 ;
+(id)_descriptionForHMErrorCode:(NSInteger)arg0 ;
+(id)_descriptionForHMHomeAddWalletKeyErrorCode:(NSInteger)arg0 ;
+(id)descriptionLocalizationKeyForError:(id)arg0 ;
+(id)sharedHandler;
-(BOOL)_isErrorIndicativeOfApplicationBug:(id)arg0 operationType:(id)arg1 options:(id)arg2 ;
-(BOOL)_isErrorPermanent:(id)arg0 operationType:(id)arg1 options:(id)arg2 ;
-(BOOL)canIgnoreError:(id)arg0 ;
-(id)_localizedDescriptionForError:(id)arg0 operationType:(id)arg1 options:(id)arg2 ;
-(id)_localizedStringOrNilIfNotFoundForKey:(id)arg0 ;
-(id)_localizedTitleForError:(id)arg0 operationType:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)handleError:(id)arg0 ;
// -(void)handleError:(id)arg0 operationType:(id)arg1 options:(id)arg2 retryBlock:(id)arg3 cancelBlock:(unk)arg4  ;
// -(void)handleError:(id)arg0 retryBlock:(id)arg1 cancelBlock:(unk)arg2  ;
-(void)logError:(id)arg0 operationDescription:(id)arg1 ;


@end


#endif