// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESCONTENTPRESENTATIONCONTEXT_H
#define SBSYSTEMNOTESCONTENTPRESENTATIONCONTEXT_H

@class SBSSystemNotesPresentationConfiguration;

#import <Foundation/Foundation.h>


@interface SBSystemNotesContentPresentationContext : NSObject

@property (nonatomic) BOOL presentedWithEdgeProtect; // ivar: _presentedWithEdgeProtect
@property (retain, nonatomic) SBSSystemNotesPresentationConfiguration *requestedConfiguration; // ivar: _requestedConfiguration
@property (nonatomic) NSUInteger source; // ivar: _source


-(id)initWithLaunchBundleID:(id)arg0 presentationMode:(NSInteger)arg1 source:(NSUInteger)arg2 edgeProtectActive:(BOOL)arg3 ;
-(id)initWithRequestedConfiguration:(id)arg0 source:(NSUInteger)arg1 edgeProtectActive:(BOOL)arg2 ;


@end


#endif