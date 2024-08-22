// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDBACKUPERRORPROVIDERIMPL_H
#define CDPDBACKUPERRORPROVIDERIMPL_H

@class CDPContext, NSString;
@protocol CDPDBackupRecoveryErrorProvider, CDPStateUIProviderInternal;

#import <Foundation/Foundation.h>


@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider>

 {
    CDPContext *_context;
    id<CDPStateUIProviderInternal> *_uiProvider;
    NSUInteger _prevailingSecret;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg0 ;
-(id)globalHardLimitError;
-(id)globalHardLimitErrorWithRecord:(id)arg0 ;
-(id)hardLimitErrorForRecord:(id)arg0 ;
-(id)initWithContext:(id)arg0 uiProvider:(id)arg1 ;
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg0 ;
-(id)verficationFailedErrorwithUnderlyingError:(id)arg0 ;
-(void)handleHardLimitError:(id)arg0 completion:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg0 completion:(id)arg1 ;
-(void)setPrevailingSecret:(NSUInteger)arg0 ;


@end


#endif