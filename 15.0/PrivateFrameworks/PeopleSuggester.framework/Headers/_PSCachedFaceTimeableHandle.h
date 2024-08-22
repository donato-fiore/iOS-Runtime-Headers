// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCACHEDFACETIMEABLEHANDLE_H
#define _PSCACHEDFACETIMEABLEHANDLE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface _PSCachedFaceTimeableHandle : NSObject

@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle


-(id)initWithExpirationDate:(id)arg0 handle:(id)arg1 ;


@end


#endif