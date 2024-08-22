// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HREXPANDEDCONTENTITEMLEARNMORE_H
#define HREXPANDEDCONTENTITEMLEARNMORE_H

@protocol HRLinkTextViewDelegate;

#import <Foundation/Foundation.h>


@interface HRExpandedContentItemLearnMore : NSObject

@property (weak, nonatomic) NSObject<HRLinkTextViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger urlIdentifier; // ivar: _urlIdentifier


-(id)initWithURLIdentifier:(NSInteger)arg0 delegate:(id)arg1 ;


@end


#endif