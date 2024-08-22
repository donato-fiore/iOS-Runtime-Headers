// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPFILLERPAGEGENERATOR_H
#define TPFILLERPAGEGENERATOR_H

@class NSString;
@protocol TPPageGenerator;

#import <Foundation/Foundation.h>


@interface TPFillerPageGenerator : NSObject <TPPageGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsPageInSectionHint:(id)arg0 withState:(id)arg1 ;
-(void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(id)arg1 ;


@end


#endif