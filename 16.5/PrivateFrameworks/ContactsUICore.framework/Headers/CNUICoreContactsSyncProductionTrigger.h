// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICORECONTACTSSYNCPRODUCTIONTRIGGER_H
#define CNUICORECONTACTSSYNCPRODUCTIONTRIGGER_H

@class NSString;
@protocol CNUICoreContactsSyncTrigger;

#import <Foundation/Foundation.h>


@interface CNUICoreContactsSyncProductionTrigger : NSObject <CNUICoreContactsSyncTrigger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fireSyncRequest;


@end


#endif