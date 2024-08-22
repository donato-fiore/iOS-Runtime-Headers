// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLHEADLESSEXTENSIONLOADER_H
#define FLHEADLESSEXTENSIONLOADER_H

@class FLExtensionContext, NSExtension, NSString, NSUUID;
@protocol FLExtensionHostContextInterface;

#import <Foundation/Foundation.h>


@interface FLHeadlessExtensionLoader : NSObject {
    FLExtensionContext *_extensionContext;
    id<FLExtensionHostContextInterface> *_delegate;
    NSExtension *_extension;
}


@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *requestInterruptionBlock; // ivar: _requestInterruptionBlock
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID


+(id)sharedExtensionQueue;
-(BOOL)_loadExtension:(*id)arg0 ;
-(BOOL)_setupSessionIfNeeded:(*id)arg0 ;
-(id)_hostContextForExtension:(id)arg0 ;
-(id)_loadExtensionForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithFollowUp:(id)arg0 andDelegate:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)remoteInterface;
-(void)_terminate;
-(void)dealloc;


@end


#endif