// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIAPPMENUBARDOCUMENT_H
#define SKUIAPPMENUBARDOCUMENT_H

@class IKAppMenuBarDocument, IKAppContext, NSString;
@protocol SKUIDOMFeature;



@interface SKUIAppMenuBarDocument : IKAppMenuBarDocument <SKUIDOMFeature>



@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif