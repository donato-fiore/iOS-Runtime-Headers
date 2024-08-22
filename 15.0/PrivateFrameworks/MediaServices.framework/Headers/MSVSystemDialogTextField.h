// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVSYSTEMDIALOGTEXTFIELD_H
#define MSVSYSTEMDIALOGTEXTFIELD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSVSystemDialogTextField : NSObject

@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)textFieldWithTitle:(id)arg0 ;
+(id)textFieldWithTitle:(id)arg0 secure:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg0 ;


@end


#endif