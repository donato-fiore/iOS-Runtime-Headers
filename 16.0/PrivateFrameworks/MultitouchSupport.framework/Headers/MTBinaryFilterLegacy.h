// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTBINARYFILTERLEGACY_H
#define MTBINARYFILTERLEGACY_H

@class NSURL, NSString;
@protocol MTBinaryFilterProtocol;

#import <Foundation/Foundation.h>


@interface MTBinaryFilterLegacy : NSObject <MTBinaryFilterProtocol>



@property (retain, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (retain, nonatomic) id *cfBundle; // ivar: _cfBundle
@property (nonatomic) *unk createBinaryFilter; // ivar: _createBinaryFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *_MTBinaryFilter legacyFilter; // ivar: _legacyFilter
@property (readonly, nonatomic) unsigned int maxFrameSize; // ivar: _maxFrameSize
@property (weak, nonatomic) id *mtDevice; // ivar: _mtDevice
@property (readonly) Class superclass;


-(id)initFromURL:(id)arg0 device:(struct __MTDevice *)arg1 ;
-(id)initWithInfo:(id)arg0 ;
-(void)dealloc;
-(void)filterFrame:(*char *)arg0 size:(*unsigned int)arg1 maxSize:(*unsigned int)arg2 extraFrame:(id)arg3 ;
-(void)reset;


@end


#endif