// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDVIEWSERVICE_H
#define GDVIEWSERVICE_H


#import <Foundation/Foundation.h>

#import "GDViewDatabaseInstances.h"
#import "GDViewAccessRequester.h"

@interface GDViewService : NSObject {
    GDViewDatabaseInstances *_databases;
}


@property (readonly, nonatomic) GDViewAccessRequester *accessRequester; // ivar: _accessRequester


+(id)defaultService;
-(id)donationViewWithError:(*id)arg0 ;
-(id)featureViewWithError:(*id)arg0 ;
-(id)init;
-(id)initForTestingWithAccessRequester:(id)arg0 ;
-(id)pageRankViewWithError:(*id)arg0 ;
-(id)personViewWithError:(*id)arg0 ;
-(id)visualIdentifierViewWithError:(*id)arg0 ;


@end


#endif