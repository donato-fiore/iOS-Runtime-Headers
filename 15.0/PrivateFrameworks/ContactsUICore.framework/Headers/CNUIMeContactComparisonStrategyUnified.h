// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIMECONTACTCOMPARISONSTRATEGYUNIFIED_H
#define CNUIMECONTACTCOMPARISONSTRATEGYUNIFIED_H

@class NSString, NSSet;
@protocol CNMeContactComparisonStrategy;

#import <Foundation/Foundation.h>


@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *meContactIdentifiersFound; // ivar: _meContactIdentifiersFound
@property (readonly) Class superclass;


-(BOOL)isMeContact:(id)arg0 ;
-(id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg0 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg0 ;


@end


#endif