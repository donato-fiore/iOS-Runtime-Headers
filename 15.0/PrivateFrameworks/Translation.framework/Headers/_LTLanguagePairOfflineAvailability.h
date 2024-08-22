// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTLANGUAGEPAIROFFLINEAVAILABILITY_H
#define _LTLANGUAGEPAIROFFLINEAVAILABILITY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *mtState; // ivar: _mtState
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) _LTLocalePair *pair; // ivar: _pair
@property (nonatomic) NSUInteger pairState; // ivar: _pairState
@property (retain, nonatomic) NSString *sourceASRState; // ivar: _sourceASRState
@property (retain, nonatomic) NSString *sourceTTSState; // ivar: _sourceTTSState
@property (retain, nonatomic) NSString *targetASRState; // ivar: _targetASRState
@property (retain, nonatomic) NSString *targetTTSState; // ivar: _targetTTSState


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocales:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif