// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDREFERENCEEXTRACTIONRESULT_H
#define HDREFERENCEEXTRACTIONRESULT_H

@class NSArray, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *completeResources; // ivar: _completeResources
@property (readonly, copy, nonatomic) NSArray *incompleteResources; // ivar: _incompleteResources
@property (readonly, copy, nonatomic) NSURL *nextSearchResultURL; // ivar: _nextSearchResultURL
@property (readonly, copy, nonatomic) NSArray *unresolvableReferences; // ivar: _unresolvableReferences


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompleteResources:(id)arg0 incompleteResources:(id)arg1 unresolvableReferences:(id)arg2 nextSearchResultURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif