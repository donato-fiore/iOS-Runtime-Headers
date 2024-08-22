// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKRESPONSE_H
#define RKRESPONSE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface RKResponse : NSObject

@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (retain) NSString *category; // ivar: _category
@property (retain) NSString *string; // ivar: _string


-(id)initWithString:(id)arg0 attributes:(id)arg1 category:(id)arg2 ;


@end


#endif