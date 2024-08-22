// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSPERFCOUNTERMAILBOX_H
#define MTLTOOLSPERFCOUNTERMAILBOX_H


#import <Foundation/Foundation.h>


@interface MTLToolsPerfCounterMailbox : NSObject {
    *void _requester;
    vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>> _data;
    __wrap_iter<std::pair<NSData *, unsigned long> *> _iterator;
}




-(id)extractDataAndNumSamples:(*NSUInteger)arg0 forRequester:(*void)arg1 isLast:(*BOOL)arg2 ;
-(void)insertData:(id)arg0 andNumSamples:(NSUInteger)arg1 forRequester:(*void)arg2 ;


@end


#endif