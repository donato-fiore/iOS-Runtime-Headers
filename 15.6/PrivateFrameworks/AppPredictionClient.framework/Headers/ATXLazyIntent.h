// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXLAZYINTENT_H
#define ATXLAZYINTENT_H

@class INIntent, NSData;
@protocol ATXLazyIntentDelegateProtocol;

#import <Foundation/Foundation.h>


@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}


@property (weak, nonatomic) NSObject<ATXLazyIntentDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;


-(BOOL)isDeserialized;
-(id)_deserializeIntent;
-(id)init;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 intentData:(id)arg1 ;
-(id)initWithIntentData:(id)arg0 ;
-(void)handleMemoryPressure;


@end


#endif