// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPCONNECTIONFLAGSEARCHREQUEST_H
#define MFIMAPCONNECTIONFLAGSEARCHREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MFIMAPConnectionFlagSearchRequest : NSObject

@property (readonly, nonatomic) BOOL isPositiveMatch; // ivar: _isPositiveMatch
@property (readonly, nonatomic) NSUInteger mask; // ivar: _mask
@property (readonly, nonatomic) NSArray *searchTerms; // ivar: _searchTerms


+(id)requestWithMask:(NSUInteger)arg0 searchTerms:(id)arg1 positiveMatch:(BOOL)arg2 ;
-(id)initWithMask:(NSUInteger)arg0 searchTerms:(id)arg1 positiveMatch:(BOOL)arg2 ;


@end


#endif