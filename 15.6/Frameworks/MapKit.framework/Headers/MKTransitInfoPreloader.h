// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITINFOPRELOADER_H
#define MKTRANSITINFOPRELOADER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MKTransitInfoPreloader : NSObject {
    NSArray *_transitLabels;
}




+(id)attributedTextFromPreload:(id)arg0 view:(id)arg1 ;
+(id)separatorImageWithLineHeight:(CGFloat)arg0 ;
-(id)initWithTransitLabels:(id)arg0 ;
-(void)preloadWithCompletion:(id)arg0 ;


@end


#endif