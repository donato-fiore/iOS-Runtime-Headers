// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMUTABLESTATUSDOMAINDATACHANGECONTEXT_H
#define STMUTABLESTATUSDOMAINDATACHANGECONTEXT_H

@class NSString;
@protocol STMutableStatusDomainDataChangeContext;


#import "STStatusDomainDataChangeContext.h"

@interface STMutableStatusDomainDataChangeContext : STStatusDomainDataChangeContext <STMutableStatusDomainDataChangeContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif