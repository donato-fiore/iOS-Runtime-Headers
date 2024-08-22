// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CRSCARDSERVICEBUNDLE_H
#define _CRSCARDSERVICEBUNDLE_H

@class CRSServiceBundle, NSString;
@protocol CRSCardServing;



@interface _CRSCardServiceBundle : CRSServiceBundle <CRSCardServing>

 {
    id<CRSCardServing> *_cardService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSatisfyCardRequest:(id)arg0 ;
-(NSUInteger)servicePriorityForRequest:(id)arg0 ;
-(id)underlyingService;
-(void)_initializeCardServiceWithClass:(Class)arg0 ;
-(void)requestCard:(id)arg0 reply:(id)arg1 ;


@end


#endif