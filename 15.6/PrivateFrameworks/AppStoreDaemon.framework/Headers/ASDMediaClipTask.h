// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDMEDIACLIPTASK_H
#define ASDMEDIACLIPTASK_H

@class AMSTask, NSString, AMSProcessInfo, NSNumber;
@protocol AMSBagConsumer, AMSBagProtocol;



@interface ASDMediaClipTask : AMSTask <AMSBagConsumer>

 {
    id<AMSBagProtocol> *_bag;
    NSString *_clientID;
    NSString *_logKey;
    NSUInteger _signpostID;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *externalVersionID; // ivar: _externalVersionID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)_componentsPromise;
-(id)initWithClientID:(id)arg0 bag:(id)arg1 ;
-(id)perform;


@end


#endif