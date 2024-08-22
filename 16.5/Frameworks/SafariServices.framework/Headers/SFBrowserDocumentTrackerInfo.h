// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBROWSERDOCUMENTTRACKERINFO_H
#define SFBROWSERDOCUMENTTRACKERINFO_H

@class NSDate, NSSet;
@protocol _SFBrowserDocument;

#import <Foundation/Foundation.h>


@interface SFBrowserDocumentTrackerInfo : NSObject {
    BOOL _cachedTrackingPreventionEnabled;
    NSDate *_lastNavigationCommitDate;
}


@property (readonly, nonatomic) NSSet *allowedKnownTrackingThirdParties; // ivar: _allowedKnownTrackingThirdParties
@property (readonly, weak, nonatomic) NSObject<_SFBrowserDocument> *document; // ivar: _document
@property (readonly, nonatomic) NSSet *preventedKnownTrackingThirdParties; // ivar: _preventedKnownTrackingThirdParties


+(BOOL)trackingPreventionEnabled;
-(id)initWithDocument:(id)arg0 ;
-(void)_flushKnownTrackingThirdParties;
-(void)_resetKnownTrackingThirdParties;
-(void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateKnownTrackingThirdPartiesWithCompletionHandler:(id)arg0 ;


@end


#endif