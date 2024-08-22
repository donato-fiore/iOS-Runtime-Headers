// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSIDSSERVERBAG_H
#define IDSIDSSERVERBAG_H



#import "IDSServerBag.h"

@interface IDSIDSServerBag : IDSServerBag



+(id)_bagCreationLock;
+(id)defaultBag;
-(BOOL)isInDebilitatedMode;
-(BOOL)requiresIDSConnection;
-(NSUInteger)_bagDomain;
-(id)_bagDefaultsDomain;
-(id)init;


@end


#endif