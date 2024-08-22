// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSCARDREQUEST_H
#define CRSCARDREQUEST_H

@class NSString, NSSet;
@protocol CRSCardRequesting, OS_dispatch_queue, CRContent;


#import "CRSRequest.h"

@interface CRSCardRequest : CRSRequest <CRSCardRequesting>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSObject<CRContent> *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic, getter=_excludedServiceIdentifiers, setter=_setExcludedServiceIdentifiers:) NSSet *excludedServiceIdentifiers; // ivar: _excludedServiceIdentifiers
@property (nonatomic) NSUInteger format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadsBundleServices; // ivar: _loadsBundleServices
@property (readonly) Class superclass;


+(void)initialize;
+(void)registerService:(id)arg0 ;
-(id)init;
-(id)initWithContent:(id)arg0 format:(NSUInteger)arg1 ;
-(void)_loadAndRegisterBundleServices:(id)arg0 ;
-(void)_tryRemainingCardServices:(id)arg0 reply:(id)arg1 ;
-(void)startWithReply:(id)arg0 ;


@end


#endif