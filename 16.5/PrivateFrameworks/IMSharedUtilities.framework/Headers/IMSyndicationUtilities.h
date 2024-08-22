// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSYNDICATIONUTILITIES_H
#define IMSYNDICATIONUTILITIES_H

@class CKContainer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMSyndicationUtilities : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *attributionFetchQueue; // ivar: _attributionFetchQueue
@property (retain, nonatomic) CKContainer *ckContainer; // ivar: _ckContainer


-(NSUInteger)_collaborationAppForURL:(id)arg0 ;
-(id)UTITypeForURL:(id)arg0 ;
-(id)_URLSchemeForCollaborationApp:(NSUInteger)arg0 ;
-(id)_bundleIDsForCollaborationApp:(NSUInteger)arg0 ;
-(id)_fetchCKBundleIDsForURL:(id)arg0 returnLocalBundlesOnly:(BOOL)arg1 ;
-(id)bundleIDsForCollaborationURL:(id)arg0 ;
-(id)bundleIDsForShareBearURL:(id)arg0 ;
-(id)init;
-(void)fetchAttributionsForHighlight:(id)arg0 highlight:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif