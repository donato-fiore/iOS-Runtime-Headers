// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMESSAGEINFO_H
#define BCMESSAGEINFO_H

@class NSString, NSDictionary, UIImage;
@protocol BSDescriptionProviding, BCDictionarySerializable;

#import <Foundation/Foundation.h>


@interface BCMessageInfo : NSObject <BSDescriptionProviding, BCDictionarySerializable>

 {
    NSString *__style;
}


@property (retain, nonatomic) NSString *alternateTitle; // ivar: _alternateTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *imageDescription; // ivar: _imageDescription
@property (retain, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (readonly, nonatomic) NSString *style;
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 imageDictionary:(id)arg1 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 style:(id)arg2 alternateTitle:(id)arg3 imageIdentifier:(id)arg4 imageDescription:(id)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif