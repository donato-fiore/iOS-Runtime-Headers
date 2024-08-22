// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFDARESOLVERECIPIENTSCONSUMER_H
#define _MFDARESOLVERECIPIENTSCONSUMER_H

@class MFConditionLock, NSDictionary, NSError;
@protocol DAResolveRecipientsConsumer;

#import <Foundation/Foundation.h>


@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer>

 {
    MFConditionLock *_conditionLock;
    NSDictionary *_resolvedRecipientsByEmailAddress;
    NSError *_error;
}


@property (readonly) NSError *error;


-(id)init;
-(id)waitForResolvedRecipients;
-(void)actionFailed:(NSInteger)arg0 forTask:(id)arg1 error:(id)arg2 ;
-(void)resolvedRecipientsByEmailAddress:(id)arg0 ;


@end


#endif