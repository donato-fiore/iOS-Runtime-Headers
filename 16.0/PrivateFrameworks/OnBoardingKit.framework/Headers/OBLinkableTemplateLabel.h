// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBLINKABLETEMPLATELABEL_H
#define OBLINKABLETEMPLATELABEL_H

@class NSURL, UITapGestureRecognizer;


#import "OBTemplateLabel.h"

@interface OBLinkableTemplateLabel : OBTemplateLabel

@property (retain, nonatomic) NSURL *destinationLink; // ivar: _destinationLink
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(id)init;
-(void)_linkTapped:(id)arg0 ;
-(void)setLearnMoreURL:(id)arg0 ;


@end


#endif