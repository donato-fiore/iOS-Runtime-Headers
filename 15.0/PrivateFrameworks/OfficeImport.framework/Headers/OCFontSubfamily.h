// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCFONTSUBFAMILY_H
#define OCFONTSUBFAMILY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OCFontMetadata.h"

@interface OCFontSubfamily : NSObject

@property (readonly, nonatomic) OCFontMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)fontSubfamilyWithName:(id)arg0 metadata:(id)arg1 ;
-(id)initWithName:(id)arg0 metadata:(id)arg1 ;


@end


#endif