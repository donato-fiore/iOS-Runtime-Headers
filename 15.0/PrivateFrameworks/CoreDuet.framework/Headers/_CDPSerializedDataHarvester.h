// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDPSERIALIZEDDATAHARVESTER_H
#define _CDPSERIALIZEDDATAHARVESTER_H

@class NSString, NSURL;
@protocol _CDPDataHarvester;

#import <Foundation/Foundation.h>


@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


// -(void)loadWithLimit:(NSUInteger)arg0 dataPointReader:(id)arg1 completion:(unk)arg2  ;


@end


#endif