// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTRICHTEXTPAYLOAD_H
#define TSTRICHTEXTPAYLOAD_H

@protocol TSPCopying;


#import "TSPObject.h"
#import "TSWPStorage.h"

@interface TSTRichTextPayload : TSPObject <TSPCopying>



@property (retain, nonatomic) TSWPStorage *storage; // ivar: mStorage


-(BOOL)requiresRichText;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 storage:(id)arg1 ;
-(id)initWithStorage:(id)arg0 ;
-(id)string;
-(void)dealloc;


@end


#endif