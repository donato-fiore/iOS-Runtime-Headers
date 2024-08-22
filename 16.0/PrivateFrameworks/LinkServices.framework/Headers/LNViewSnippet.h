// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNVIEWSNIPPET_H
#define LNVIEWSNIPPET_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNViewSnippet : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSData *viewData; // ivar: _viewData


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif