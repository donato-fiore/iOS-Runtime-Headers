// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKURLREQUESTAPPROVER_H
#define AKURLREQUESTAPPROVER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AKURLRequestApprover : NSObject {
    NSArray *_whiteListedPaths;
}




-(BOOL)_matchInputAgainstPaths:(id)arg0 ;
-(BOOL)shouldAllowRequest:(id)arg0 ;
-(id)initWithWhitelistedPaths:(id)arg0 ;


@end


#endif