// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSCLAIMBINDINGCONFIGURATION_H
#define LSCLAIMBINDINGCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LSClaimBindingConfiguration : NSObject

@property BOOL addClaimRecordIfMissing; // ivar: _addClaimRecordIfMissing
@property NSUInteger bundleClassMask; // ivar: _bundleClassMask
@property (readonly) NSString *typeIdentifier; // ivar: _typeIdentifier


-(id)initWithTypeIdentifier:(id)arg0 ;


@end


#endif