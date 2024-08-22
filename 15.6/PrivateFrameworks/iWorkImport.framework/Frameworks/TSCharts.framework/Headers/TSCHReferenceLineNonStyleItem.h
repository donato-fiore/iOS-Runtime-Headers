// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHREFERENCELINENONSTYLEITEM_H
#define TSCHREFERENCELINENONSTYLEITEM_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "TSCHReferenceLineNonStyle.h"

@interface TSCHReferenceLineNonStyleItem : NSObject

@property (retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // ivar: _nonStyle
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _UUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initFromUnarchiver:(id)arg0 message:(*void)arg1 ;
-(id)initWithNonStyle:(id)arg0 uuid:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 message:(*void)arg1 ;


@end


#endif