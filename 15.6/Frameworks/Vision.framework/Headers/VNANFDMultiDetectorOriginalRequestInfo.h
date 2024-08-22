// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNANFDMULTIDETECTORORIGINALREQUESTINFO_H
#define VNANFDMULTIDETECTORORIGINALREQUESTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject

@property (readonly, nonatomic) NSUInteger originalRequestResultsIndex; // ivar: _originalRequestResultsIndex
@property (readonly, nonatomic) NSString *originatingRequestSpecifierKey; // ivar: _originatingRequestSpecifierKey


+(id)originatingRequestSpecifierToDetectorClassMap;
+(id)requestClassNameFromRequestKey:(id)arg0 ;
+(id)requestKeyFromRequest:(id)arg0 ;
+(id)requestPropertiesFromRequestKey:(id)arg0 ;
-(id)description;
-(id)initWithOriginatingRequestSpecifierProcessingOptionKey:(id)arg0 originalRequestResultsIndex:(NSUInteger)arg1 ;


@end


#endif