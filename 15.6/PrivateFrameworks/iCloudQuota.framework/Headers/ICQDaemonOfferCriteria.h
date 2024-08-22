// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQDAEMONOFFERCRITERIA_H
#define ICQDAEMONOFFERCRITERIA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ICQDaemonOfferCriteria : NSObject {
    NSDictionary *_serverDict;
}


@property (readonly, nonatomic) NSDictionary *serverDictionary;


-(BOOL)isSatisfiedByConditions:(id)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;


@end


#endif