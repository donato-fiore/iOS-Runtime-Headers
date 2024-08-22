// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFMAILCONTENTPROVIDER_H
#define _SFMAILCONTENTPROVIDER_H

@class NSString;
@protocol MFMailComposeViewControllerDelegate, _SFMailContentProviderDataSource;

#import <Foundation/Foundation.h>


@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate>



@property (weak, nonatomic) NSObject<_SFMailContentProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL restrictAddingPDFContent; // ivar: _restrictAddingPDFContent
@property (readonly) Class superclass;


-(BOOL)_canProvideContentType:(NSInteger)arg0 ;
-(NSInteger)_bestContentTypeForPreferredContentType:(NSInteger)arg0 ;
-(NSInteger)_defaultPreferredContentType;
-(id)_preferentiallyOrderedAvailableContentTypes;
-(id)_preferentiallyOrderedContentTypes;
-(void)_getPDFDataWithCompletionHandler:(id)arg0 ;
-(void)_getReaderContentWithCompletionHandler:(id)arg0 ;
-(void)_getWebArchiveDataWithCompletion:(id)arg0 ;
-(void)getMailComposeViewControllerWithMailToURL:(id)arg0 contentURL:(id)arg1 preferredContentType:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)prepareMailComposeViewController:(id)arg0 withMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(NSInteger)arg3 completionHandler:(id)arg4 ;


@end


#endif