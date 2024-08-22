// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMUTABLEFOCUSSTATUSDOMAINDATA_H
#define STMUTABLEFOCUSSTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STFocusStatusDomainData.h"

@interface STMutableFocusStatusDomainData : STFocusStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *modeIdentifier;
@property (copy, nonatomic) NSString *modeName;
@property (copy, nonatomic) NSString *modeSymbol;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif