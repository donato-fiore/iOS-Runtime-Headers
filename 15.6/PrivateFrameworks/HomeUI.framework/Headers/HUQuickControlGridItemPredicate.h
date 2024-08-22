// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLGRIDITEMPREDICATE_H
#define HUQUICKCONTROLGRIDITEMPREDICATE_H

@class NSString;
@protocol HUQuickControlItemPredicate;

#import <Foundation/Foundation.h>


@interface HUQuickControlGridItemPredicate : NSObject <HUQuickControlItemPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumNumberOfMatches;
@property (readonly) Class superclass;


-(id)matchingControlItemsForControlItems:(id)arg0 ;


@end


#endif