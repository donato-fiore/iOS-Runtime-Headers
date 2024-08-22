// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMESSAGEACTIONHANDLER_H
#define EDMESSAGEACTIONHANDLER_H

@class MEAppExtensionsController, EFLocked, EFCancelationToken, NSString, NSArray;
@protocol MEAppExtensionsObserver, EFLoggable;

#import <Foundation/Foundation.h>


@interface EDMessageActionHandler : NSObject <MEAppExtensionsObserver, EFLoggable>

 {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *messageActionProviders;
@property (readonly, copy, nonatomic) NSArray *requiredHeaders;
@property (readonly) Class superclass;


+(id)log;
-(id)actionDecisionForMessage:(id)arg0 usingMessageActionProvider:(id)arg1 ;
-(id)actionProviderInterfacesByExtensionID;
-(id)initWithExtensionsController:(id)arg0 ;
-(void)dealloc;
-(void)extensionsMatched:(id)arg0 ;
-(void)extensionsNoLongerMatching:(id)arg0 ;


@end


#endif