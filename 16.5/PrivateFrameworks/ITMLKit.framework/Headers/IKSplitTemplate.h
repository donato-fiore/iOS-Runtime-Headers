// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKSPLITTEMPLATE_H
#define IKSPLITTEMPLATE_H

@class NSString;


#import "IKViewElement.h"
#import "IKDOMFeatureNavigationDocument.h"

@interface IKSplitTemplate : IKViewElement

@property (copy, nonatomic) NSString *displayMode; // ivar: _displayMode
@property (readonly, nonatomic) IKDOMFeatureNavigationDocument *leftNavigationDocument; // ivar: _leftNavigationDocument
@property (readonly, nonatomic) IKDOMFeatureNavigationDocument *rightNavigationDocument; // ivar: _rightNavigationDocument


+(id)supportedFeatures;
-(id)_featureWithName:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif