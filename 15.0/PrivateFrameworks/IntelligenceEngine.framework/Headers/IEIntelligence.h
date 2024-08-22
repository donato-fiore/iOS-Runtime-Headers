// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IEINTELLIGENCE_H
#define IEINTELLIGENCE_H


#import <Foundation/Foundation.h>


@interface IEIntelligence : NSObject

@property (nonatomic) *TtIntelligence mIntelligence; // ivar: mIntelligence


-(BOOL)isActive;
-(id)init;
-(id)processIntent:(id)arg0 ;
-(id)startConversation;
-(void)dealloc;
-(void)load:(id)arg0 ;


@end


#endif