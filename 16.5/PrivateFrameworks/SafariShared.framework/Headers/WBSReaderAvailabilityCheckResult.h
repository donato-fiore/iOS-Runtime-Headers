// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSREADERAVAILABILITYCHECKRESULT_H
#define WBSREADERAVAILABILITYCHECKRESULT_H

@class NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *canonicalURL; // ivar: _canonicalURL
@property (nonatomic) BOOL doesPageUseSearchEngineOptimizationMetadata; // ivar: _doesPageUseSearchEngineOptimizationMetadata
@property (nonatomic) BOOL isSameDocumentNavigation; // ivar: _isSameDocumentNavigation
@property (nonatomic, getter=isReaderAvailable) BOOL readerAvailable; // ivar: _readerAvailable
@property (copy, nonatomic) NSArray *textSamples; // ivar: _textSamples


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif