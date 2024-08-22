// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCE_H
#define PKPAYMENTPREFERENCE_H

@class NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKPaymentPreference : NSObject

@property (retain, nonatomic) NSMutableDictionary *errors; // ivar: _errors
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) id *footerLinkActionBlock; // ivar: _footerLinkActionBlock
@property (nonatomic) _NSRange footerLinkRange; // ivar: _footerLinkRange
@property (nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (nonatomic) NSUInteger pendingIndex; // ivar: _pendingIndex
@property (copy, nonatomic) NSArray *preferences; // ivar: _preferences
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly, nonatomic) BOOL supportsDeletion; // ivar: _supportsDeletion
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)preferenceObject:(id)arg0 representsContact:(id)arg1 ;
-(id)errorsForPreference:(id)arg0 ;
-(id)initWithTitle:(id)arg0 preferences:(id)arg1 selectedIndex:(NSUInteger)arg2 readOnly:(BOOL)arg3 ;
-(void)clearAllErrors;


@end


#endif