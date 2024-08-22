// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXCALLSTACKTHREAD_H
#define MXCALLSTACKTHREAD_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXCallStackThread : NSObject <NSSecureCoding>



@property (readonly) BOOL attributedThread; // ivar: _attributedThread
@property (readonly) NSArray *topFrames; // ivar: _topFrames


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopCallStackFrames:(id)arg0 isAttributedThread:(BOOL)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif