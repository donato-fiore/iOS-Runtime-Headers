// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRTEXTEDITINGATTRIBUTES_H
#define MRTEXTEDITINGATTRIBUTES_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MRTextEditingAttributes : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) _MRTextInputTraits inputTraits; // ivar: _inputTraits
@property (readonly, nonatomic) NSString *prompt; // ivar: _prompt
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 prompt:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif