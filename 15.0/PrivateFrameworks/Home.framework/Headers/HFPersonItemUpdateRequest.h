// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFPERSONITEMUPDATEREQUEST_H
#define HFPERSONITEMUPDATEREQUEST_H

@class HMHome, HMPerson, HMPersonManager;

#import <Foundation/Foundation.h>


@interface HFPersonItemUpdateRequest : NSObject

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) HMPerson *person; // ivar: _person
@property (readonly, nonatomic) HMPersonManager *personManager; // ivar: _personManager


-(id)initWithPerson:(id)arg0 personManager:(id)arg1 home:(id)arg2 ;
-(id)updateWithOptions:(id)arg0 ;


@end


#endif