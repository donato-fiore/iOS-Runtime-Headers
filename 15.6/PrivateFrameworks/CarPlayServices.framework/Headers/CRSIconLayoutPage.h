// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSICONLAYOUTPAGE_H
#define CRSICONLAYOUTPAGE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRSIconLayoutPage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *icons; // ivar: _icons


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIcons:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif