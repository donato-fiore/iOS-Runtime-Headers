// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTINSTALLREQUEST_H
#define _LTINSTALLREQUEST_H

@class NSArray;
@protocol NSSecureCoding, OS_dispatch_queue, _LTTranslationService, _LTSpeechTranslationDelegate;

#import <Foundation/Foundation.h>


@interface _LTInstallRequest : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> *_service;
    id *_done;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *locales; // ivar: _locales
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL useCellular; // ivar: _useCellular


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocales:(id)arg0 useCellular:(BOOL)arg1 ;
-(id)initWithLocales:(id)arg0 useCellular:(BOOL)arg1 delegate:(id)arg2 ;
-(id)initWithLocales:(id)arg0 useCellular:(BOOL)arg1 progressHandler:(id)arg2 ;
-(void)_startInstallationWithService:(id)arg0 done:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)languageInstallProgressed:(id)arg0 error:(id)arg1 ;


@end


#endif