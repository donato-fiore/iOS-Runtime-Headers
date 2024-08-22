// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMTSPAN_H
#define EMTSPAN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMTSpan : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL doNotTranslate; // ivar: _doNotTranslate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 range:(struct _NSRange )arg1 doNotTranslate:(BOOL)arg2 ;


@end


#endif