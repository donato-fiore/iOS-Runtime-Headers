// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES23SRSMARTREPLIESCAPTIONER_H
#define _TTC12SMARTREPLIES23SRSMARTREPLIESCAPTIONER_H

@class CKContextClient;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies23SRSmartRepliesCaptioner : NSObject {
    ? $__lazy_storage_$_contextClient;
}


@property (nonatomic, retain) CKContextClient *contextClient;


-(id)inferredContactsIn:(id)arg0 ;
-(id)init;
-(void)captionsWithContactDetail:(id)arg0 onComplete:(id)arg1 ;
-(void)captionsWithImage:(struct CGImage *)arg0 onComplete:(id)arg1 ;
-(void)captionsWithText:(id)arg0 onComplete:(id)arg1 ;


@end


#endif