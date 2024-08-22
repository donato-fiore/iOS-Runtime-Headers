// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLTAGGERASSETREQUEST_H
#define NLTAGGERASSETREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NLTaggerAssetRequest : NSObject {
    NSString *_language;
    NSString *_tagScheme;
    id *_completionHandler;
}




+(void)checkAssetRequests;
-(BOOL)isFulfilled;
-(id)initWithLanguage:(id)arg0 tagScheme:(id)arg1 completionHandler:(id)arg2 ;
-(void)completeWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)waitForFulfillment;


@end


#endif