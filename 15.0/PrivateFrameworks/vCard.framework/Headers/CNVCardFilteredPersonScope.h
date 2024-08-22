// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDFILTEREDPERSONSCOPE_H
#define CNVCARDFILTEREDPERSONSCOPE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CNVCardFilteredPersonScope : NSObject

@property (readonly) NSSet *blacklist; // ivar: _blacklist
@property (readonly) NSUInteger filterOptions; // ivar: _filterOptions


-(BOOL)isEmpty;
-(id)initWithBlacklist:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif