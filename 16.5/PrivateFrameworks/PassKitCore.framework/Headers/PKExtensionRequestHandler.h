// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXTENSIONREQUESTHANDLER_H
#define PKEXTENSIONREQUESTHANDLER_H

@class NSExtension, NSExtensionContext, NSString;
@protocol PKInvalidatable, NSCopying;

#import <Foundation/Foundation.h>


@interface PKExtensionRequestHandler : NSObject <PKInvalidatable>

 {
    NSExtension *_extension;
    NSExtensionContext *_extensionContext;
    id<NSCopying> *_requestIdentifier;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)_initWithExtension:(id)arg0 extensionRequestOptions:(NSUInteger)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif