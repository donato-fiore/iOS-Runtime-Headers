// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFOCUS_H
#define EMFOCUS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface EMFocus : NSObject

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers; // ivar: _focusedAccountIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFocusedIdentifier:(id)arg0 ;
-(id)initWithFocusedAccountIdentifiers:(id)arg0 ;


@end


#endif