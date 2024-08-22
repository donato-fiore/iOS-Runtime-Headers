// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQFLOWSPECIFICATION_H
#define _ICQFLOWSPECIFICATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "_ICQAlertSpecification.h"
#import "_ICQPageSpecification.h"

@interface _ICQFlowSpecification : NSObject

@property (readonly, nonatomic) NSDictionary *pagesByIdentifier; // ivar: _pagesByIdentifier
@property (retain, nonatomic) _ICQAlertSpecification *startAlert; // ivar: _startAlert
@property (readonly, nonatomic) _ICQPageSpecification *startPage; // ivar: _startPage


-(id)initWithPages:(id)arg0 ;


@end


#endif