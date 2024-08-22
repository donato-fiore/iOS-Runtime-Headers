// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNTEMPLATEITEMPROVIDER_H
#define BNTEMPLATEITEMPROVIDER_H

@class NSString, NSAttributedString, UIButtonConfiguration;
@protocol BNTemplateTextProviding, BNTemplateViewProviding, BNImageProviding;

#import <Foundation/Foundation.h>


@interface BNTemplateItemProvider : NSObject <BNTemplateTextProviding, BNTemplateViewProviding>

 {
    NSInteger _templateItemType;
    id *_templateItem;
}


@property (copy, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *templateItemAttributedText;
@property (readonly, nonatomic) UIButtonConfiguration *templateItemButtonConfiguration;
@property (readonly, nonatomic) NSObject<BNImageProviding> *templateItemImageProvider;
@property (readonly, copy, nonatomic) NSString *templateItemText;
@property (nonatomic) NSInteger visualStyle; // ivar: _visualStyle
@property (nonatomic) NSInteger visualStyleCategory; // ivar: _visualStyleCategory


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif