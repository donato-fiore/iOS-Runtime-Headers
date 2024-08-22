// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRTEXTEDITINGSESSION_H
#define MRTEXTEDITINGSESSION_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MRTextEditingAttributes.h"

@interface MRTextEditingSession : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) MRTextEditingAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithText:(id)arg0 attributes:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif