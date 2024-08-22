// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCOLLABORATIONHIGHLIGHTPROVIDER_H
#define TUCOLLABORATIONHIGHLIGHTPROVIDER_H

@class NSMutableDictionary, NSString, SWHighlightCenter;
@protocol SWHighlightCenterDelegate, TUCollaborationProvider, TUCollaborationProviderDelegate;

#import <Foundation/Foundation.h>


@interface TUCollaborationHighlightProvider : NSObject <SWHighlightCenterDelegate, TUCollaborationProvider>



@property (readonly, nonatomic) NSMutableDictionary *collaborationIdentifierToBundleIDs; // ivar: _collaborationIdentifierToBundleIDs
@property (readonly, nonatomic) NSMutableDictionary *collaborationIdentifierToPendingCollaborations; // ivar: _collaborationIdentifierToPendingCollaborations
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUCollaborationProviderDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter; // ivar: _highlightCenter
@property (readonly) Class superclass;


-(id)addTemporaryCollaboration:(id)arg0 ;
-(id)ckBundleIDForCollaborationIdentifier:(id)arg0 ;
-(id)collaborationHighlightForIdentifier:(id)arg0 ;
-(id)init;
-(void)highlightCenterHighlightsDidChange:(id)arg0 ;


@end


#endif