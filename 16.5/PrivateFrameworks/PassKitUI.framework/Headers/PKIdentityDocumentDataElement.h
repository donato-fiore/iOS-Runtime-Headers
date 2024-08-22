// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDENTITYDOCUMENTDATAELEMENT_H
#define PKIDENTITYDOCUMENTDATAELEMENT_H

@class NSAttributedString, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface PKIdentityDocumentDataElement : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *localizedLabel; // ivar: _localizedLabel
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithImage:(id)arg0 ;
-(id)initWithLocalizedLabel:(id)arg0 attributedText:(id)arg1 ;
-(id)initWithLocalizedLabel:(id)arg0 text:(id)arg1 ;


@end


#endif