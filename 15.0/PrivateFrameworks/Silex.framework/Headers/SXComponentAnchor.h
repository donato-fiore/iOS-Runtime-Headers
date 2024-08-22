// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTANCHOR_H
#define SXCOMPONENTANCHOR_H

@class NSString;
@protocol SXComponentAnchor;

#import <Foundation/Foundation.h>


@interface SXComponentAnchor : NSObject <SXComponentAnchor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger originAnchorPosition; // ivar: _originAnchorPosition
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetAnchorPosition; // ivar: _targetAnchorPosition
@property (readonly, nonatomic) NSString *targetComponentIdentifier; // ivar: _targetComponentIdentifier


-(id)initWithTargetComponentIdentifier:(id)arg0 ;


@end


#endif