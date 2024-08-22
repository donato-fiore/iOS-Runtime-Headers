// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONSTITCHINGINPUTTHREADGROUP_H
#define MTLFUNCTIONSTITCHINGINPUTTHREADGROUP_H

@class NSString;
@protocol MTLFunctionStitchingInputNodeSPI;

#import <Foundation/Foundation.h>


@interface MTLFunctionStitchingInputThreadgroup : NSObject <MTLFunctionStitchingInputNodeSPI>



@property (nonatomic) NSUInteger bindIndex; // ivar: _bindIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBindIndex:(NSUInteger)arg0 ;


@end


#endif