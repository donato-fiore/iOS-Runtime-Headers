// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCORESHAREDBUFFERDATA_H
#define WEBCORESHAREDBUFFERDATA_H

@class NSData;



@interface WebCoreSharedBufferData : NSData {
    RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> _dataSegment;
    NSUInteger _position;
    NSUInteger _size;
}




+(void)initialize;
-(*void)bytes;
-(NSUInteger)length;
-(id)initWithDataSegment:(*void)arg0 position:(NSUInteger)arg1 size:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif