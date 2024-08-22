// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPREDICATEVALIDATORINSTANCE_H
#define CKPREDICATEVALIDATORINSTANCE_H

@class NSString;
@protocol CKObjectValidating;

#import <Foundation/Foundation.h>


@interface CKPredicateValidatorInstance : NSObject <CKObjectValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validate:(id)arg0 error:(*id)arg1 ;


@end


#endif