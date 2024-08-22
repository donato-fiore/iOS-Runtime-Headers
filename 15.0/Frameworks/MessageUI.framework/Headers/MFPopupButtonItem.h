// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPOPUPBUTTONITEM_H
#define MFPOPUPBUTTONITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFPopupButtonItem : NSObject

@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)itemWithTitle:(id)arg0 ;
+(id)itemWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;


@end


#endif