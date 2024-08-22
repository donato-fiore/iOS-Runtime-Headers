// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINBOXCELLDATA_H
#define CKINBOXCELLDATA_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface CKInboxCellData : NSObject

@property (nonatomic) NSUInteger filterMode; // ivar: _filterMode
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithImage:(id)arg0 withTitle:(id)arg1 ;
-(id)initWithImage:(id)arg0 withTitle:(id)arg1 withFiltermode:(NSUInteger)arg2 ;
-(id)initWithImage:(id)arg0 withTitle:(id)arg1 withSubtitle:(id)arg2 ;


@end


#endif