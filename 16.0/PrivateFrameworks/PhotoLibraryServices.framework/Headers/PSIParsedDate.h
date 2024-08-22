// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIPARSEDDATE_H
#define PSIPARSEDDATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PSIParsedDate : NSObject

@property (readonly, copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) _NSRange extensionRange; // ivar: _extensionRange
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)initWithAttributes:(id)arg0 range:(struct _NSRange )arg1 extensionRange:(struct _NSRange )arg2 ;


@end


#endif