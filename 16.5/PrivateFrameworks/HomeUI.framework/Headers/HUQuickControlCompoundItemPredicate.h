// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLCOMPOUNDITEMPREDICATE_H
#define HUQUICKCONTROLCOMPOUNDITEMPREDICATE_H

@class NSString, NSArray;
@protocol HUQuickControlItemPredicate;

#import <Foundation/Foundation.h>


@interface HUQuickControlCompoundItemPredicate : NSObject <HUQuickControlItemPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumNumberOfMatches;
@property (readonly, nonatomic) NSUInteger minimumNumberOfMatchedPredicates; // ivar: _minimumNumberOfMatchedPredicates
@property (readonly, copy, nonatomic) NSArray *optionalSubpredicates; // ivar: _optionalSubpredicates
@property (readonly, copy, nonatomic) NSArray *requiredSubpredicates; // ivar: _requiredSubpredicates
@property (readonly) Class superclass;


-(id)allSubpredicates;
-(id)init;
-(id)initWithRequiredSubpredicates:(id)arg0 optionalSubpredicates:(id)arg1 ;
-(id)initWithRequiredSubpredicates:(id)arg0 optionalSubpredicates:(id)arg1 minimumNumberOfMatchedPredicates:(NSUInteger)arg2 ;
-(id)matchingControlItemsForControlItems:(id)arg0 ;


@end


#endif