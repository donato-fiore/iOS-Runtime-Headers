// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFRESULTFEEDBACK_H
#define SFRESULTFEEDBACK_H

@protocol NSCopying;


#import "SFFeedback.h"
#import "SFSearchResult.h"

@interface SFResultFeedback : SFFeedback <NSCopying>



@property (retain, nonatomic) SFSearchResult *result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif