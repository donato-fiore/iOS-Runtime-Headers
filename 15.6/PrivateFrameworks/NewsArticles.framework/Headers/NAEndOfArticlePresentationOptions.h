// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAENDOFARTICLEPRESENTATIONOPTIONS_H
#define NAENDOFARTICLEPRESENTATIONOPTIONS_H


#import <Foundation/Foundation.h>


@interface NAEndOfArticlePresentationOptions : NSObject {
    ? suppressMoreFromSection;
    ? suppressRelatedSection;
    ? suppressRecommendedReadsSection;
    ? articleBackgroundColor;
}




-(id)init;
-(id)initWithSuppressMoreFromSection:(BOOL)arg0 suppressRelatedSection:(BOOL)arg1 suppressRecommendedReadsSection:(NSInteger)arg2 articleBackgroundColor:(id)arg3 ;


@end


#endif