// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERVERDICT_H
#define NEFILTERVERDICT_H

@class NSString;
@protocol NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>

 {
    BOOL _remediate;
    BOOL _urlAppendString;
    BOOL _pause;
    NSString *_remediationURLMapKey;
    NSString *_remediationButtonTextMapKey;
    NSString *_urlAppendStringMapKey;
}


@property BOOL drop; // ivar: _drop
@property (readonly) NSInteger filterAction;
@property BOOL needRules; // ivar: _needRules
@property BOOL shouldReport; // ivar: _shouldReport


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrop:(BOOL)arg0 remediate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif