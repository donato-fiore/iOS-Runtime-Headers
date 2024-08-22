// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAQISCALEEPA_H
#define WFAQISCALEEPA_H

@class NSString;
@protocol WFAQIScale;

#import <Foundation/Foundation.h>


@interface WFAQIScaleEPA : NSObject <WFAQIScale>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(id)scaleCategoryForCategoryIndex:(NSUInteger)arg0 localizedCategoryDescription:(id)arg1 ;


@end


#endif