// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNDYNAMICOPTIONSSECTION_H
#define LNDYNAMICOPTIONSSECTION_H

@class NSArray, LNDeferredLocalizedString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNDynamicOptionsSection : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *options; // ivar: _options
@property (readonly, nonatomic) LNDeferredLocalizedString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(id)arg0 title:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif