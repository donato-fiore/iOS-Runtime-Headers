// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MDINDEXEXTENSION_H
#define _MDINDEXEXTENSION_H

@class NSString, NSExtension, NSSet, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MDIndexExtension : NSObject

@property (retain, nonatomic) NSString *containerID; // ivar: _containerID
@property (retain, nonatomic) NSString *containerPath; // ivar: _containerPath
@property (readonly) BOOL dontRunDuringMigration;
@property (nonatomic) BOOL entitlementVerified; // ivar: _entitlementVerified
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSString *extensionID; // ivar: _extensionID
@property (readonly) NSString *extensionLabel; // ivar: _extensionLabel
@property (copy) NSSet *identifiers; // ivar: _identifiers
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) BOOL isEnabled;
@property (readonly) BOOL isInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy) NSSet *supportedFileTypes; // ivar: _supportedFileTypes


-(BOOL)_verifyIntegrityWithHostContext:(id)arg0 ;
-(id)description;
-(id)initWithExtension:(id)arg0 queue:(id)arg1 containerPath:(id)arg2 containerID:(id)arg3 ;
-(id)initWithExtension:(id)arg0 queue:(id)arg1 containerPath:(id)arg2 containerID:(id)arg3 supportedFileTypes:(id)arg4 extensionLabel:(id)arg5 ;
-(void)_performJob:(id)arg0 completionBlock:(id)arg1 ;
-(void)performJob:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif