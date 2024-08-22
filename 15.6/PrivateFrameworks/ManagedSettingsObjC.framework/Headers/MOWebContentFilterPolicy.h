// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOWEBCONTENTFILTERPOLICY_H
#define MOWEBCONTENTFILTERPOLICY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MOWebContentFilterPolicy : NSObject

@property (readonly) NSArray *autoAllow; // ivar: _autoAllow
@property (readonly) NSArray *neverAllow; // ivar: _neverAllow
@property (readonly) NSArray *onlyAllow; // ivar: _onlyAllow


-(id)initWithAutoAllow:(id)arg0 neverAllow:(id)arg1 onlyAllow:(id)arg2 ;


@end


#endif