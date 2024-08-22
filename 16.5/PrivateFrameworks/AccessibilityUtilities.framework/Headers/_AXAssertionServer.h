// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AXASSERTIONSERVER_H
#define _AXASSERTIONSERVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _AXAssertionServer : NSObject

@property (copy, nonatomic) id *assertionWasAcquiredHandler; // ivar: _assertionWasAcquiredHandler
@property (copy, nonatomic) id *assertionWasReleasedHandler; // ivar: _assertionWasReleasedHandler
@property (retain, nonatomic) NSMutableDictionary *heldAssertionMap; // ivar: _heldAssertionMap


-(id)clientsHoldingAssertionOfType:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addHeldAssertionOfType:(id)arg0 byClient:(id)arg1 ;
-(void)removeHeldAssertionOfType:(id)arg0 byClient:(id)arg1 ;


@end


#endif