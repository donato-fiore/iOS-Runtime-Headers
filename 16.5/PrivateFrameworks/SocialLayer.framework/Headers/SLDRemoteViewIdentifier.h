// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDREMOTEVIEWIDENTIFIER_H
#define SLDREMOTEVIEWIDENTIFIER_H

@class UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLDSlotTag.h"

@interface SLDRemoteViewIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style; // ivar: _style
@property (retain, nonatomic) SLDSlotTag *tag; // ivar: _tag


+(id)identifierForStyle:(id)arg0 tag:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;


@end


#endif