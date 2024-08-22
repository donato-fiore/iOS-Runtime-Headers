// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCLIPMEDIATASK_H
#define AMSCLIPMEDIATASK_H

@class NSURL, NSString, NSNumber;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSClipMediaTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *externalVersionID; // ivar: _externalVersionID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)_componentsPromise;
-(id)_performJourneysLookup;
-(id)_performNetworkLookup;
-(id)initWithClientID:(id)arg0 bundleID:(id)arg1 URL:(id)arg2 bag:(id)arg3 ;
-(id)perform;


@end


#endif