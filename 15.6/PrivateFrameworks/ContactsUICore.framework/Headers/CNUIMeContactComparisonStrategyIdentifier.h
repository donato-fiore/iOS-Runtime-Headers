// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIMECONTACTCOMPARISONSTRATEGYIDENTIFIER_H
#define CNUIMECONTACTCOMPARISONSTRATEGYIDENTIFIER_H

@class NSString;
@protocol CNMeContactComparisonStrategy;

#import <Foundation/Foundation.h>


@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *meContactIdentifierFound; // ivar: _meContactIdentifierFound
@property (readonly) Class superclass;


-(BOOL)isMeContact:(id)arg0 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg0 ;


@end


#endif