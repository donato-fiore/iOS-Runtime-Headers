// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPFONT_H
#define SPFONT_H

@class NSString, UIFont;
@protocol NSSecureCoding, NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface SPFont : NSObject <NSSecureCoding, NSKeyedUnarchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFont:(id)arg0 ;
-(id)unarchiver:(id)arg0 didDecodeObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif