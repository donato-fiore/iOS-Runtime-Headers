// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCACHEDTEXTSTYLE_H
#define OADCACHEDTEXTSTYLE_H


#import <Foundation/Foundation.h>


@interface OADCachedTextStyle : NSObject {
    OADCachedTextStyleData mData;
    NSUInteger mHash;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTextBodyProperties:(id)arg0 paragraphProperties:(id)arg1 characterProperties:(id)arg2 colorContext:(id)arg3 graphicStyleCache:(id)arg4 ;
-(void)applyToParagraphProperties:(id)arg0 graphicStyleCache:(id)arg1 ;
-(void)applyToTextBodyProperties:(id)arg0 graphicStyleCache:(id)arg1 ;


@end


#endif