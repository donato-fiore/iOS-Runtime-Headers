// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIVIBRANCYVALUES_H
#define BSUIVIBRANCYVALUES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BSUIVibrancyValues : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger resolvedEffectType; // ivar: _resolvedEffectType
@property (readonly, nonatomic) NSString *resolvedGroupName; // ivar: _resolvedGroupName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)calculateValuesForConfiguration:(id)arg0 ;


@end


#endif