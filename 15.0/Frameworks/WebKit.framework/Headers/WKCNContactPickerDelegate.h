// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKCNCONTACTPICKERDELEGATE_H
#define WKCNCONTACTPICKERDELEGATE_H

@class NSString;
@protocol CNContactPickerDelegate;

#import <Foundation/Foundation.h>


@interface WKCNContactPickerDelegate : NSObject <CNContactPickerDelegate>

 {
    WeakObjCPtr<id<CNContactPickerDelegate>> _contactPickerDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContactPickerDelegate:(id)arg0 ;
-(void)contactPickerDidCancel:(id)arg0 ;


@end


#endif