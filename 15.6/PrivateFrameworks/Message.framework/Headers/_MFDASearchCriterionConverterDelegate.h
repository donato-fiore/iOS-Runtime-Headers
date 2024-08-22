// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFDASEARCHCRITERIONCONVERTERDELEGATE_H
#define _MFDASEARCHCRITERIONCONVERTERDELEGATE_H

@class NSString;
@protocol MFMessageCriterionConverterDelegate;

#import <Foundation/Foundation.h>


@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldConvertEqualsToContainsForKey:(id)arg0 ;
-(NSUInteger)messageCriterionConverter:(id)arg0 willUsePredicateOperatorType:(NSUInteger)arg1 forKey:(id)arg2 ;
-(id)messageCriterionConverter:(id)arg0 predicateKeysForCriterionType:(NSInteger)arg1 ;


@end


#endif