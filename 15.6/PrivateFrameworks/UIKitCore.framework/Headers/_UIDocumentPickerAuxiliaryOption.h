// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERAUXILIARYOPTION_H
#define _UIDOCUMENTPICKERAUXILIARYOPTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded; // ivar: _newlyAdded
@property (nonatomic) NSUInteger order; // ivar: _order
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif