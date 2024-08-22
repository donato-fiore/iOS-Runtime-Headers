// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPERSITEPREFERENCE_H
#define WBSPERSITEPREFERENCE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSPerSitePreference : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)localizedStringForBinaryPreferenceValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif