// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHLATTICEMITIGATORRESULT_H
#define AFSPEECHLATTICEMITIGATORRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechLatticeMitigatorResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) float threshold; // ivar: _threshold
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 score:(float)arg1 threshold:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif