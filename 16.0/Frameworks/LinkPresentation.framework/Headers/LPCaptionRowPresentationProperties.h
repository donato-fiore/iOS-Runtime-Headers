// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPCAPTIONROWPRESENTATIONPROPERTIES_H
#define LPCAPTIONROWPRESENTATIONPROPERTIES_H


#import <Foundation/Foundation.h>

#import "LPCaptionPresentationProperties.h"
#import "LPCaptionButtonPresentationProperties.h"

@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}


@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button; // ivar: _button
@property (readonly, nonatomic) BOOL hasAnyContent;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *leading;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing;


-(id)init;
-(id)left;
-(id)right;
-(void)applyToAllCaptions:(id)arg0 ;


@end


#endif