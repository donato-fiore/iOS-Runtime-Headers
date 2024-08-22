// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVARMETADATA_H
#define PVARMETADATA_H

@class ARFrame, AVDepthData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PVARMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ARFrame *arFrame; // ivar: _arFrame
@property (readonly, nonatomic) AVDepthData *depthData; // ivar: _depthData
@property (readonly, nonatomic) int depthFreshness; // ivar: _depthFreshness


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithARFrame:(id)arg0 ;
-(id)initWithARFrame:(id)arg0 depthData:(id)arg1 depthFreshness:(int)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif