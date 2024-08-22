// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDSYNDICATIONSERVICE_H
#define SLDSYNDICATIONSERVICE_H

@class NSString;
@protocol SLDService, SLDSyndicationServiceProcotol;

#import <Foundation/Foundation.h>


@interface SLDSyndicationService : NSObject <SLDService, SLDSyndicationServiceProcotol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(void)removeMessageGUIDFromSyndication:(id)arg0 reply:(id)arg1 ;


@end


#endif