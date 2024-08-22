// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTANGIERTEXTRENDERCOLLECTORITEM_H
#define SXTANGIERTEXTRENDERCOLLECTORITEM_H

@class NSString, UIView<TSDRepDirectLayerHosting>;

#import <Foundation/Foundation.h>

#import "SXTextTangierFlowInfo.h"
#import "SXTextTangierStorage.h"
#import "SXTextTangierFlowStorage.h"
#import "SXTextTangierTextLayout.h"
#import "SXTextTangierFlowLayout.h"

@interface SXTangierTextRenderCollectorItem : NSObject {
    BOOL _selectable;
    SXTextTangierFlowInfo *_flowInfo;
    SXTextTangierStorage *_storage;
    SXTextTangierFlowStorage *_flowStorage;
    NSString *_componentIdentifier;
    UIView<TSDRepDirectLayerHosting> *_directLayerHost;
    SXTextTangierTextLayout *_layout;
    SXTextTangierFlowLayout *_flowLayout;
    _NSRange _flowRange;
}




-(id)debugDescription;
-(id)description;


@end


#endif