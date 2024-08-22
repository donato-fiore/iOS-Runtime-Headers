// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWCONTROLLERPREVIEWACTION_H
#define UIVIEWCONTROLLERPREVIEWACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIViewControllerPreviewAction : NSObject <NSCopying>



@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)_initWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif