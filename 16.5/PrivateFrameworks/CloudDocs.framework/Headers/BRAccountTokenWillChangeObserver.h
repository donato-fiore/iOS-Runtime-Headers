// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRACCOUNTTOKENWILLCHANGEOBSERVER_H
#define BRACCOUNTTOKENWILLCHANGEOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID; // ivar: _personaID


-(id)initWithPersonaID:(id)arg0 ;
-(void)_accountWillChange;


@end


#endif