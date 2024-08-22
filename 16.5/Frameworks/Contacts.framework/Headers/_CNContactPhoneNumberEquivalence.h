// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNCONTACTPHONENUMBEREQUIVALENCE_H
#define _CNCONTACTPHONENUMBEREQUIVALENCE_H

@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

#import <Foundation/Foundation.h>


@interface _CNContactPhoneNumberEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy>

 {
    NSString *_rawString;
    *? _decomposedRepresentation;
    char * _decomposedNumberDigits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)indexKeyForString:(id)arg0 ;
-(BOOL)isEquivalentToString:(id)arg0 strict:(*BOOL)arg1 ;
-(BOOL)isPhoneNumberEquivalent:(id)arg0 strict:(*BOOL)arg1 ;
-(BOOL)isRawStringEquivalent:(id)arg0 ;
-(BOOL)preparePhoneNumberRepresentation;
-(id)initWithPhoneNumberString:(id)arg0 ;
-(void)dealloc;


@end


#endif