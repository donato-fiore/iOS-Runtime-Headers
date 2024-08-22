// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERCONTROLVERDICT_H
#define NEFILTERCONTROLVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterNewFlowVerdict.h"

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>

 {
    BOOL _updateRules;
    BOOL _handledByDataProvider;
}




+(BOOL)supportsSecureCoding;
+(id)allowVerdictWithUpdateRules:(BOOL)arg0 ;
+(id)dropVerdictWithUpdateRules:(BOOL)arg0 ;
+(id)updateRules;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif