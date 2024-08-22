// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEFILTER_H
#define DEFILTER_H


#import <Foundation/Foundation.h>

#import "DEMatchCriteria.h"

@interface DEFilter : NSObject

@property (retain, nonatomic) DEMatchCriteria *exclude; // ivar: _exclude
@property (retain, nonatomic) DEMatchCriteria *include; // ivar: _include


+(id)catUpdates;
+(id)catUpdates:(id)arg0 ;
+(id)deprecatedCatSummary;
+(id)filterFromPb:(*void)arg0 ;
+(id)filterThroughPb:(id)arg0 ;
+(void)filterToPb:(id)arg0 filterPb:(*void)arg1 ;
-(BOOL)allows:(id)arg0 ;
// -(BOOL)apply:(id)arg0 to:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithInclude:(id)arg0 exclude:(id)arg1 ;


@end


#endif