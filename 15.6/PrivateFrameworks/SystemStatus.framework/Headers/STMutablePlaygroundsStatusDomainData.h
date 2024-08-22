// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLEPLAYGROUNDSSTATUSDOMAINDATA_H
#define STMUTABLEPLAYGROUNDSSTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STPlaygroundsStatusDomainData.h"

@interface STMutablePlaygroundsStatusDomainData : STPlaygroundsStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlaygroundsActive) BOOL playgroundsActive;
@property (readonly) Class superclass;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif