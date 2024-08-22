// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLISTITEM_H
#define WFLISTITEM_H

@class WFImage, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFListItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif