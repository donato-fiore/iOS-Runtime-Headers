// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INOBJECTSECTION_H
#define INOBJECTSECTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INObjectSection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *_identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 items:(id)arg2 ;
-(id)initWithTitle:(id)arg0 items:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif