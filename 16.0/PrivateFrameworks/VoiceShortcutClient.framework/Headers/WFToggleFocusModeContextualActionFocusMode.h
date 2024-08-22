// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTOGGLEFOCUSMODECONTEXTUALACTIONFOCUSMODE_H
#define WFTOGGLEFOCUSMODECONTEXTUALACTIONFOCUSMODE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFToggleFocusModeContextualActionFocusMode : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *symbolName; // ivar: _symbolName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)color;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 symbolName:(id)arg2 colorName:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif