// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIAGNOSTICEXTENSIONCALLER_H
#define DIAGNOSTICEXTENSIONCALLER_H

@class DEExtensionManager, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DiagnosticExtensionCaller : NSObject {
    DEExtensionManager *_manager;
    NSMutableArray *_liveDEs;
}




+(BOOL)getAttachmentsFrom:(id)arg0 forBundleID:(id)arg1 withParameters:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
+(id)sharedInstance;
-(BOOL)_getAttachmentsFrom:(id)arg0 forBundleID:(id)arg1 withParameters:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(id)_getDEExtensionWithIdentifier:(id)arg0 ;
-(id)init;


@end


#endif