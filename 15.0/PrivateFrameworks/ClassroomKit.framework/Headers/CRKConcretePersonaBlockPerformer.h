// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEPERSONABLOCKPERFORMER_H
#define CRKCONCRETEPERSONABLOCKPERFORMER_H

@class NSString;
@protocol CRKPersonaBlockPerforming;

#import <Foundation/Foundation.h>


@interface CRKConcretePersonaBlockPerformer : NSObject <CRKPersonaBlockPerforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentPersona;
-(void)adoptPersonaWithUniqueString:(id)arg0 andPerformBlock:(id)arg1 ;


@end


#endif