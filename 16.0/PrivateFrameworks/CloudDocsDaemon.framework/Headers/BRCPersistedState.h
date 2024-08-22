// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPERSISTEDSTATE_H
#define BRCPERSISTEDSTATE_H

@class NSString;
@protocol NSObject, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding>



@property (weak, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // ivar: _assertionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg0 ;
+(id)loadFromClientStateInSession:(id)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)assertQueue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif