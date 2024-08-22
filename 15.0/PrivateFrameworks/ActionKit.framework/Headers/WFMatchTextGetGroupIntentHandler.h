// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMATCHTEXTGETGROUPINTENTHANDLER_H
#define WFMATCHTEXTGETGROUPINTENTHANDLER_H

@class NSString;
@protocol WFMatchTextGetGroupIntentHandling;

#import <Foundation/Foundation.h>


@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)matchedTextInString:(id)arg0 withResult:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)handleMatchTextGetGroup:(id)arg0 completion:(id)arg1 ;
-(void)resolveGroupIndexForMatchTextGetGroup:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveMatchesForMatchTextGetGroup:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTypeForMatchTextGetGroup:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif