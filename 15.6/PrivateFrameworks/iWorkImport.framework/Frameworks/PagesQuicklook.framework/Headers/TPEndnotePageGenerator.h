// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPENDNOTEPAGEGENERATOR_H
#define TPENDNOTEPAGEGENERATOR_H

@class NSString;
@protocol TPPageGenerator;

#import <Foundation/Foundation.h>

#import "TPFootnoteLayoutController.h"

@interface TPEndnotePageGenerator : NSObject <TPPageGenerator>

 {
    TPFootnoteLayoutController *_footnoteLayoutController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsPageInSectionHint:(id)arg0 withState:(id)arg1 ;
-(id)init;
-(id)initWithFootnoteLayoutController:(id)arg0 ;
-(void)createOrUpdatePageHintInSectionHint:(id)arg0 withState:(id)arg1 ;


@end


#endif