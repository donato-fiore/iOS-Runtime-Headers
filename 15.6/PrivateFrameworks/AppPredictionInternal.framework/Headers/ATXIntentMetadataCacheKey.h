// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINTENTMETADATACACHEKEY_H
#define ATXINTENTMETADATACACHEKEY_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface ATXIntentMetadataCacheKey : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *intentClassName; // ivar: _intentClassName
@property (readonly, nonatomic) NSUInteger intentHash; // ivar: _intentHash
@property (readonly, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, nonatomic) NSSet *nonNilParameters; // ivar: _nonNilParameters


-(id)initWithIntent:(id)arg0 includingParameterValues:(BOOL)arg1 localeIdentifier:(id)arg2 ;
-(id)initWithIntent:(id)arg0 includingParameters:(BOOL)arg1 ;
-(id)initWithIntent:(id)arg0 includingParameters:(BOOL)arg1 includingParameterValues:(BOOL)arg2 localeIdentifier:(id)arg3 ;
-(id)stringRepresentationForSerialization;


@end


#endif