// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSKVOCOMPATIBILITY_H
#define _NSKVOCOMPATIBILITY_H

@protocol _NSKVOCompatibilityShim;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSKVOCompatibility : NSObject <_NSKVOCompatibilityShim>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_releasesObservationBlockOnInvalidation;
+(void)_noteProcessHasUsedKVOSwiftOverlay;
+(void)_setRequiresSilencingExceptions:(BOOL)arg0 ;


@end


#endif