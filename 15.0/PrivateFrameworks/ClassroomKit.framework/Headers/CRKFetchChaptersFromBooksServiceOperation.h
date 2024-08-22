// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHCHAPTERSFROMBOOKSSERVICEOPERATION_H
#define CRKFETCHCHAPTERSFROMBOOKSSERVICEOPERATION_H

@class CATOperation;


#import "CRKFetchChaptersRequest.h"

@interface CRKFetchChaptersFromBooksServiceOperation : CATOperation {
    CRKFetchChaptersRequest *mRequest;
}




-(BOOL)isAsynchronous;
-(id)initWithRequest:(id)arg0 ;
-(void)main;


@end


#endif