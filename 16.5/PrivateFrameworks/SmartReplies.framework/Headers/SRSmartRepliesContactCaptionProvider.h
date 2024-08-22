// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSMARTREPLIESCONTACTCAPTIONPROVIDER_H
#define SRSMARTREPLIESCONTACTCAPTIONPROVIDER_H


#import <Foundation/Foundation.h>


@interface SRSmartRepliesContactCaptionProvider : NSObject



+(id)newestSuggestedContactForDestinationID:(id)arg0 ;
+(id)sharedService;
+(void)suggestedNamesForDestinationID:(id)arg0 onlySignificant:(BOOL)arg1 withCompletion:(id)arg2 ;


@end


#endif