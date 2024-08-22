// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPAGELAYOUTPAGEGENERATOR_H
#define TPPAGELAYOUTPAGEGENERATOR_H

@class NSString;
@protocol TPPageGenerator;

#import <Foundation/Foundation.h>


@interface TPPageLayoutPageGenerator : NSObject <TPPageGenerator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsPageInSectionHint:(id)arg0 withState:(id)arg1 ;
-(void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(id)arg1 ;


@end


#endif