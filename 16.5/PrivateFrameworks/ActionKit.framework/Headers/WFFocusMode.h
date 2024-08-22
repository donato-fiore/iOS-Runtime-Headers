// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSMODE_H
#define WFFOCUSMODE_H

@class NSString, WFImage;
@protocol NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFFocusMode : NSObject <NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) WFImage *symbolImage;
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFCActivityDescribing:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 symbolName:(id)arg2 colorName:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif