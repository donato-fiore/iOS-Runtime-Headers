// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSMIRESULTREGISTRANT_H
#define LSMIRESULTREGISTRANT_H

@class NSUUID, NSDictionary;
@protocol LSMIResultRegistrantStrategy;

#import <Foundation/Foundation.h>


@interface LSMIResultRegistrant : NSObject {
    id<LSMIResultRegistrantStrategy> *_strategy;
    NSUUID *_uuid;
    NSDictionary *_miDict;
}




-(id)initWithContext:(id)arg0 operationUUID:(id)arg1 itemInfoDict:(id)arg2 ;
-(void)_replyWithError:(id)arg0 onQueue:(id)arg1 block:(id)arg2 ;
-(void)runPostProcessingForBundleID:(id)arg0 success:(BOOL)arg1 isSystemApp:(BOOL)arg2 isPlaceholder:(BOOL)arg3 notificationJournaller:(id)arg4 ;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif