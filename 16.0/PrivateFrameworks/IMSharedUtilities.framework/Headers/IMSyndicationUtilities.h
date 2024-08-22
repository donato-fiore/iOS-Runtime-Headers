// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSYNDICATIONUTILITIES_H
#define IMSYNDICATIONUTILITIES_H

@class CKContainer;

#import <Foundation/Foundation.h>


@interface IMSyndicationUtilities : NSObject

@property (retain, nonatomic) CKContainer *ckContainer; // ivar: _ckContainer


-(NSUInteger)_collaborationAppForURL:(id)arg0 ;
-(id)UTITypeForURL:(id)arg0 ;
-(id)_URLSchemeForCollaborationApp:(NSUInteger)arg0 ;
-(id)_bundleIDsForCollaborationApp:(NSUInteger)arg0 ;
-(id)_fetchCKBundleIDsForURL:(id)arg0 returnLocalBundlesOnly:(BOOL)arg1 ;
-(id)bundleIDsForCollaborationURL:(id)arg0 ;
-(id)bundleIDsForShareBearURL:(id)arg0 ;


@end


#endif