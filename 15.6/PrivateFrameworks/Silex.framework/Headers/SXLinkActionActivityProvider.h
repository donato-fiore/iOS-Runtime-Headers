// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXLINKACTIONACTIVITYPROVIDER_H
#define SXLINKACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXURLHandling, SXURLPreviewing, SXLinkActionURLQualifier, SXHost;

#import <Foundation/Foundation.h>


@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, nonatomic) NSObject<SXURLHandling> *URLHandler; // ivar: _URLHandler
@property (readonly, nonatomic) NSObject<SXURLPreviewing> *URLPreviewing; // ivar: _URLPreviewing
@property (readonly, nonatomic) NSObject<SXLinkActionURLQualifier> *URLQualifier; // ivar: _URLQualifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;
-(id)initWithURLHandler:(id)arg0 URLPreviewing:(id)arg1 host:(id)arg2 URLQualifier:(id)arg3 ;
-(id)previewActivityForAction:(id)arg0 ;
-(void)open:(id)arg0 ;
-(void)openInNewWindow:(id)arg0 ;
-(void)openInSafari:(id)arg0 ;


@end


#endif