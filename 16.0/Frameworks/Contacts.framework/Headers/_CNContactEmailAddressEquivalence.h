// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCONTACTEMAILADDRESSEQUIVALENCE_H
#define _CNCONTACTEMAILADDRESSEQUIVALENCE_H

@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

#import <Foundation/Foundation.h>


@interface _CNContactEmailAddressEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy>

 {
    NSString *_rawString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)indexKeyForString:(id)arg0 ;
-(BOOL)isEquivalentToString:(id)arg0 strict:(*BOOL)arg1 ;
-(id)initWithEmailAddress:(id)arg0 ;


@end


#endif