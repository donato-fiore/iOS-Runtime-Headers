// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDBARCONTENTARRANGEMENT_H
#define SFUNIFIEDBARCONTENTARRANGEMENT_H

@class NSArray, UIView<SFUnifiedBarContentView>;

#import <Foundation/Foundation.h>


@interface SFUnifiedBarContentArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *allContentViews;
@property (readonly, nonatomic) UIView<SFUnifiedBarContentView> *inlineContentView; // ivar: _inlineContentView
@property (readonly, copy, nonatomic) NSArray *standaloneContentViews; // ivar: _standaloneContentViews


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithInlineContentView:(id)arg0 standaloneContentViews:(id)arg1 ;


@end


#endif