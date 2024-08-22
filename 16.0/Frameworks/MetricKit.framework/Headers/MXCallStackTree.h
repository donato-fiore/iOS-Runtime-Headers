// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXCALLSTACKTREE_H
#define MXCALLSTACKTREE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXCallStackTree : NSObject <NSSecureCoding>



@property (readonly) BOOL callStackPerThread; // ivar: _callStackPerThread
@property (readonly) NSArray *callStackThreads; // ivar: _callStackThreads


+(BOOL)supportsSecureCoding;
-(id)JSONRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreadArray:(id)arg0 aggregatedByProcess:(BOOL)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif