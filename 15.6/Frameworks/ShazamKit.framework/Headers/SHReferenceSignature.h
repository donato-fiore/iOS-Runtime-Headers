// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHREFERENCESIGNATURE_H
#define SHREFERENCESIGNATURE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHReferenceSignature : NSObject

@property (readonly, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, nonatomic) SHSignature *signature; // ivar: _signature
@property (readonly, nonatomic) NSUInteger trackID; // ivar: _trackID


-(id)initWithID:(id)arg0 trackID:(NSUInteger)arg1 signature:(id)arg2 ;


@end


#endif