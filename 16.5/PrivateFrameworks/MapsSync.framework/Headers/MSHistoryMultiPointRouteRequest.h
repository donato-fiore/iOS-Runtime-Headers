// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSHISTORYMULTIPOINTROUTEREQUEST_H
#define MSHISTORYMULTIPOINTROUTEREQUEST_H


#import <Foundation/Foundation.h>


@interface MSHistoryMultiPointRouteRequest : NSObject {
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