// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHIPEXTENSIONREQUESTSTORAGETUPLE_H
#define HFCHIPEXTENSIONREQUESTSTORAGETUPLE_H

@class NAPromise, NSDate;

#import <Foundation/Foundation.h>


@interface HFCHIPExtensionRequestStorageTuple : NSObject

@property (readonly, nonatomic) NAPromise *promise; // ivar: _promise
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithPromise:(id)arg0 ;
-(id)initWithPromise:(id)arg0 startDate:(id)arg1 ;


@end


#endif