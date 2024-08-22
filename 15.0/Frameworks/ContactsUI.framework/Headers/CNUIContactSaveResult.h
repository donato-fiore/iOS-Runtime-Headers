// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICONTACTSAVERESULT_H
#define CNUICONTACTSAVERESULT_H

@class CNMutableContact, NSArray;

#import <Foundation/Foundation.h>


@interface CNUIContactSaveResult : NSObject

@property (readonly, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSArray *identifiersOfIssuedSaveRequests; // ivar: _identifiersOfIssuedSaveRequests
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)initWithSuccess:(BOOL)arg0 contact:(id)arg1 identifiersOfIssuedSaveRequests:(id)arg2 ;


@end


#endif