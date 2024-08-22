// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIREQUESTEDINPUTMODES_H
#define TIREQUESTEDINPUTMODES_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIRequestedInputModes : NSObject {
    BOOL _didLoad;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_inputModesByDate;
}




+(id)defaultDatabaseURL;
-(id)_inputModes;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)_addInputMode:(id)arg0 date:(id)arg1 handler:(id)arg2 ;
-(void)_inputModes:(id)arg0 ;
-(void)_loadIfNecessaryWithCompletion:(id)arg0 ;
-(void)_removeAllInputModes:(id)arg0 ;
-(void)_removeInputModesBeforeDate:(id)arg0 handler:(id)arg1 ;
-(void)_saveInputModes;
-(void)addInputMode:(id)arg0 date:(id)arg1 handler:(id)arg2 ;
-(void)inputModes:(id)arg0 ;
-(void)removeAllInputModes:(id)arg0 ;
-(void)removeInputModesBeforeDate:(id)arg0 handler:(id)arg1 ;


@end


#endif