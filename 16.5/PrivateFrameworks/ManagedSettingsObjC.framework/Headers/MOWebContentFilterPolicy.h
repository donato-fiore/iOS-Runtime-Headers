// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBCONTENTFILTERPOLICY_H
#define MOWEBCONTENTFILTERPOLICY_H

@class NSSet, NSString;
@protocol MOPersistable;

#import <Foundation/Foundation.h>


@interface MOWebContentFilterPolicy : NSObject <MOPersistable>



@property (readonly) NSSet *autoAllow; // ivar: _autoAllow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *neverAllow; // ivar: _neverAllow
@property (readonly) NSSet *onlyAllow; // ivar: _onlyAllow
@property (readonly, nonatomic) id *persistableValue;
@property (readonly) NSInteger policy; // ivar: _policy
@property (readonly) Class superclass;


+(BOOL)isValidPersistableRepresentation:(id)arg0 ;
+(id)initializeWithPersistableValue:(id)arg0 ;
+(id)nonePolicy;
-(id)initWithAutoAllow:(id)arg0 neverAllow:(id)arg1 onlyAllow:(id)arg2 ;


@end


#endif