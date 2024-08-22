// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBBUTTON_H
#define BBBUTTON_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBAction.h"
#import "BBImage.h"

@interface BBButton : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) BBAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSData *glyphData;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) BBImage *image; // ivar: _image
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)buttonWithTitle:(id)arg0 action:(id)arg1 ;
+(id)buttonWithTitle:(id)arg0 action:(id)arg1 identifier:(id)arg2 ;
+(id)buttonWithTitle:(id)arg0 glyphData:(id)arg1 action:(id)arg2 identifier:(id)arg3 ;
+(id)buttonWithTitle:(id)arg0 image:(id)arg1 action:(id)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 action:(id)arg2 identifier:(id)arg3 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif