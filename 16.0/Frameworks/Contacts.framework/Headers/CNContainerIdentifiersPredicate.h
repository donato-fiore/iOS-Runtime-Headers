// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTAINERIDENTIFIERSPREDICATE_H
#define CNCONTAINERIDENTIFIERSPREDICATE_H

@class NSString, NSArray;
@protocol CNCDContainerPredicate;


#import "CNPredicate.h"

@interface CNContainerIdentifiersPredicate : CNPredicate <CNCDContainerPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


-(id)cn_persistenceFilterRequest;
-(id)cn_topLevelFilter;
-(id)initWithIdentifiers:(id)arg0 ;


@end


#endif