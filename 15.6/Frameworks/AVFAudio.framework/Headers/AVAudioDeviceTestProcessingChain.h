// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIODEVICETESTPROCESSINGCHAIN_H
#define AVAUDIODEVICETESTPROCESSINGCHAIN_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *graphURL; // ivar: _graphURL
@property (retain, nonatomic) NSURL *processingStripURL; // ivar: _processingStripURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif