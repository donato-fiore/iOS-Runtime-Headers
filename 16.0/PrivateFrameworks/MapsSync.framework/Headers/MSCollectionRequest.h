// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCOLLECTIONREQUEST_H
#define MSCOLLECTIONREQUEST_H


#import <Foundation/Foundation.h>


@interface MSCollectionRequest : NSObject {
    ? _request;
}




-(?)fetchWithCompletionHandler;
-(?)fetchWithOptionscompletionHandler;
-(id)fetchSyncAndReturnError:(*id)arg0 ;
-(id)fetchSyncWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;


@end


#endif