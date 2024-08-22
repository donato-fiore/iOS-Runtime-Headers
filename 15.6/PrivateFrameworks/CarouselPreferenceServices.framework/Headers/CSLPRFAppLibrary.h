// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFAPPLIBRARY_H
#define CSLPRFAPPLIBRARY_H

@class NSArray, NSDictionary, NSString;
@protocol CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider;

#import <Foundation/Foundation.h>


@interface CSLPRFAppLibrary : NSObject <CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider>



@property (retain, nonatomic) NSArray *appDataProviders; // ivar: _appDataProviders
@property (retain, nonatomic) NSDictionary *apps; // ivar: _apps
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLPRFAppDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAppDataProviders:(id)arg0 ;
-(void)dataProviderDidChange:(id)arg0 ;
-(void)loadAppsWithCompletion:(id)arg0 ;
// -(void)loadAppsWithCompletion:(id)arg0 completionQueue:(unk)arg1  ;


@end


#endif