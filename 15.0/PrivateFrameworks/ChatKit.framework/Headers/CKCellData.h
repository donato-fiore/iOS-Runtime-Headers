// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCELLDATA_H
#define CKCELLDATA_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface CKCellData : NSObject

@property (retain, nonatomic) NSString *identifer; // ivar: _identifer
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithImage:(id)arg0 withTitle:(id)arg1 ;
-(id)initWithImage:(id)arg0 withTitle:(id)arg1 withSubtitle:(id)arg2 ;


@end


#endif