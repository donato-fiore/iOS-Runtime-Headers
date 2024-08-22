// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTCOMMANDBUFFERISSUE_H
#define GTCOMMANDBUFFERISSUE_H

@class NSData, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTCommandBufferIssue : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *commandBufferCommitCallstackData; // ivar: _commandBufferCommitCallstackData
@property (nonatomic) unsigned int commandBufferCommitCallstackFramesNum; // ivar: _commandBufferCommitCallstackFramesNum
@property (copy, nonatomic) NSArray *faultingEncoders; // ivar: _faultingEncoders
@property (copy, nonatomic) NSString *metalLogMessage; // ivar: _metalLogMessage


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif