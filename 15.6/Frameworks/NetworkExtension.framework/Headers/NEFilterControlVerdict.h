// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERCONTROLVERDICT_H
#define NEFILTERCONTROLVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterNewFlowVerdict.h"

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>



@property BOOL handledByDataProvider; // ivar: _handledByDataProvider
@property BOOL updateRules; // ivar: _updateRules


+(BOOL)supportsSecureCoding;
+(id)allowVerdictWithUpdateRules:(BOOL)arg0 ;
+(id)dropVerdictWithUpdateRules:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif