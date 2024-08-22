// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAUTOUNLOCKCOMPOSABLERULE_H
#define SBAUTOUNLOCKCOMPOSABLERULE_H

@class NSMutableSet, NSString;
@protocol SBAutoUnlockRule;

#import <Foundation/Foundation.h>


@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule>

 {
    NSMutableSet *_rules;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(id)init;
-(void)addAutoUnlockRule:(id)arg0 ;
-(void)removeAutoUnlockRule:(id)arg0 ;


@end


#endif