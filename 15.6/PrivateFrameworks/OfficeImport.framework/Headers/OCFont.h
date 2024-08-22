// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCFONT_H
#define OCFONT_H


#import <Foundation/Foundation.h>

#import "OCFontSubfamily.h"

@interface OCFont : NSObject

@property (nonatomic) BOOL bold; // ivar: _bold
@property (nonatomic) BOOL italic; // ivar: _italic
@property (readonly, nonatomic) OCFontSubfamily *subfamily; // ivar: _subfamily


+(id)fontWithSubfamily:(id)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 ;
-(id)initWithSubfamily:(id)arg0 bold:(BOOL)arg1 italic:(BOOL)arg2 ;


@end


#endif